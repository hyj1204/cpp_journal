#include <iostream>
#include <list> //for list
#include <string> //for string

using namespace std;

void print_str_list(list<string> input_list)
{
    auto pos = input_list.begin();
    for(pos = input_list.begin(); pos != input_list.end(); pos++)
    {
    cout << *pos << " ";
    }
    cout << endl;
}

int main()
{
    list<string> names;
    names.push_back("Tom");
    names.push_back("Diana");
    names.push_back("Harry");
//要访问里面元素的话就需要用到list iterator 链表迭代子
//An iterator marks a position in the list

//list<string>::iterator pos = names.begin();
//这行代码跟下一行是一样的意思
auto pos = names.begin();
//运行的时候 g++ -std=c11 **.c 即可消除警告报错
cout << "*pos = " + *pos << endl; //通过iterator所指的内容来显示里面的东西
print_str_list(names);

//pos = names.begin(); //reset
names.insert(pos, "111");
cout << "After insert pos" << endl;
print_str_list(names);

cout << "before *pos = " + *pos << endl;
pos = names.erase(pos);
cout << "After erase pos" << endl;
print_str_list(names);
cout << "after *pos = " + *pos << endl;






    return 0;
}