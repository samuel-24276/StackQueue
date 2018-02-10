#include<iostream>

template<class T>
struct Node
{
    T data;
    Node <T> *next;
};

template<class  T>
class L_Queue
{
    Node <T> *front;
    Node <T> *rear;
public:
    L_Queue()
    {
        front = rear = new Node <T>;
        front->next = NULL;
    }
    L_Queue(T a[], int n);
    ~L_Queue();
    bool isEmpty();
    bool EnQueue(T a);
    bool DeQueue(T& a);
    void print();
    T GetFront();
};

template<class T>
L_Queue<T>::L_Queue(T a[], int n)
{
    front = rear = new Node <T>;
    for(int i=0; i<n; ++i)
    {
        rear->data = a[i];
        rear->next = new Node <T>;
        rear = rear->next;
    }
    rear->next = NULL;
}

template<class T>
L_Queue<T>::~L_Queue()
{
    Node <T> *p;
    while(front != rear)
    {
        p = front;
        front = front->next;
        delete p;
    }
    delete front;
    front = rear = NULL;
}

template<class T>
bool L_Queue<T>::isEmpty()
{
    return (front == rear);
}

template<class T>
bool L_Queue<T>::EnQueue(T a)
{
    rear->data = a;
    rear->next = new Node <T>;
    rear = rear->next;
    return true;
}

template<class T>
bool L_Queue<T>::DeQueue(T& a)
{
    Node <T> *p = front;
    a = p->data;
    front = front->next;
    delete p;
    return true;
}

template<class T>
void L_Queue<T>::print()
{
    std::cout<<"当前队列各个元素依次为：\n";
    Node <T> *p = front;
    while(p != rear)
    {
        std::cout<<p->data<<" ";
        p = p->next;
    }
    std::cout<<std::endl;
}

template<class T>
T L_Queue<T>::GetFront()
{
    return front->data;
}


