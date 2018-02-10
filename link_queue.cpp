#include "link_queue.h"

int main()
{
    char a[4] = {'y', 'x', 'q', 'x'};
    L_Queue<char> q1(a, 4);
    char ch;
    q1.print();
    std::cout<<"队头元素为："<<q1.GetFront()<<std::endl;
    q1.EnQueue('!');
    q1.print();
    for(int i=0; i<5; ++i)
        q1.DeQueue(ch);
    std::cout<<"此时的队头元素为："<<ch<<std::endl;
    if(q1.isEmpty())    std::cout<<"队列为空"<<std::endl;
    return 0;
}



/// 2018.2.1
