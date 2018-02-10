#include "stack.h"

int main()
{
    char a[4] = {'a', 'b', 'c', 'd'};
    char ch;
    Stack<int> s1;
    Stack<char> s2(a, 4);
    std::cout<<"栈s2的长度为："<<s2.GetLength()<<std::endl;
    std::cout<<"栈s2的栈顶元素为："<<s2.GetTop()<<std::endl;
    s2.print();
    s2.push('e');
    s2.print();
    while(!s2.isEmpty())
    {
        s2.pop(ch);
        std::cout<<ch<<" ";
    }
    std::cout<<std::endl;
    s1.print();
    Stack<char> s3(a, 10);
    if(s3.isFull())
        s3.print();
    return 0;
}



///2018.2.1     
