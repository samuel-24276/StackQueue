#include "loop_queue.h"

int main()
{
    char a[5] = {'a', 'b', 'c', 'd', 'e'};
    circle_queue<int> c1;
    circle_queue<char> c2(a, 5);
    char ch;
    c2.print();
    std::cout<<"当前循环队列的队头元素为："<<c2.GetFront()<<std::endl;
    std::cout<<"当前循环队列的长度为："<<c2.GetLength()<<std::endl;
    c2.EnQueue('*');
    c2.print();
    c2.DeQueue(ch);
    c2.print();
    std::cout<<"被删除的队头元素是："<<ch<<std::endl;
    c1.EnQueue(99);
    c1.print();
    return 0;
}


