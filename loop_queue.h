#include<iostream>

const int MAXSIZE = 10;

template<class T>
class circle_queue
{
    T data[MAXSIZE+1];
    int front;
    int rear;
public:
    circle_queue(){front = rear =0;}
    circle_queue(T a[], int n);
    bool EnQueue(T a);
    bool DeQueue(T& a);
    bool isFull();
    bool isEmpty();
    int GetLength();
    T GetFront();
    void print();
};


template<class T>
circle_queue<T>::circle_queue(T a[], int n)
{
    if(n<1 || n>MAXSIZE)    throw"数据溢出";
    for(int i=0; i<n; ++i)
        data[i] = a[i];
    front = 0;
    rear = n;
}

template<class T>
bool circle_queue<T>::isFull()
{
    if((rear+1)%MAXSIZE == front)
        return true;
    return false;
}

template<class T>
bool circle_queue<T>::isEmpty()
{
    if(front == rear)
        return true;
    return false;
}

template<class T>
bool circle_queue<T>::EnQueue(T a)
{
    if(isFull())    return false;
    data[rear] = a;
    rear = (rear+1)%MAXSIZE;
    return true;
}

template<class T>
bool circle_queue<T>::DeQueue(T& a)
{
    if(isEmpty())   return false;
    a = data[front];
    front = (front+1)%MAXSIZE;
    return true;
}

template<class T>
int circle_queue<T>::GetLength()
{
    return (rear-front);
}

template<class T>
T circle_queue<T>::GetFront()
{
    return data[front];
}

template<class T>
void circle_queue<T>::print()
{
    std::cout<<"当前循环队列各元素依次为：\n";
    int i = front;
    while(i != rear)
        std::cout<<data[i++]<<" ";
    std::cout<<std::endl;
}


