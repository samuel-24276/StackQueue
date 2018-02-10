#include "link_stack.h"

int main()
{
    char a[4] = {'a', 'b', 'c', 'd'};
    char ch;
    Stack<char> s1(a, 4);
    std::cout<<"栈中元素个数为："<<s1.GetLength()<<std::endl;
    s1.print();
    s1.push('-');
    s1.print();
    s1.pop(ch);
    std::cout<<"被弹出元素为："<<ch<<std::endl;
    s1.print();
    std::cout<<"栈顶元素为："<<s1.GetTop()<<std::endl;
    for(int i=0; i<4; ++i)
        s1.pop(ch);
    if(s1.isEmpty())    std::cout<<"栈为空";
    return 0;
}

