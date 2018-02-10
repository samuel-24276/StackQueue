#include<iostream>

template <class T>
struct Node
{
    T data;
    Node <T> *pri;
};


template <class T>
class   Stack
{
    Node <T> *base;
    Node <T> *top;
public:
    Stack();
    Stack(T a[], int n);
    ~Stack();
    bool push(T a);
    bool pop(T& a);
    bool isEmpty();
    T& GetTop();
    int GetLength();
    void print();
};

template <class T>
Stack<T>::Stack()
{
    base = top = new Node <T>;
    top->pri = NULL;
}

template <class T>
Stack<T>::Stack(T a[], int n)
{
    base = top = new Node <T>;
    base->data = n;
    base->pri = NULL;
    Node <T> *p;
    for(int i=0; i<n; ++i)
    {
        p = new Node <T>;
        p->pri = top;
        p->data = a[i];
        top = p;
    }
}

template <class T>
Stack<T>::~Stack()
{
    Node <T> *p;
    while(top)
    {
        p = top;
        top = top->pri;
        delete p;
    }
    base = top = NULL;
}

template <class T>
bool Stack<T>::push(T a)
{
    Node <T> *p = new Node <T>;
    p->data = a;
    p->pri = top;
    top = p;
    return true;
}

template <class T>
bool Stack<T>::pop(T& a)
{
    if(top == base)     return false;
    Node <T> *p = top;
    top = top->pri;
    a = p->data;
    delete p;
    return true;
}

template <class T>
bool Stack<T>::isEmpty()
{
    return (base == top);
}

template <class T>
T& Stack<T>::GetTop()
{
    return top->data;
}

template <class T>
int Stack<T>::GetLength()
{
    return base->data;
}

template <class T>
void Stack<T>::print()
{
    std::cout<<"当前栈中所有元素为：\n";
    Node <T> *p = top;
    while(p != base)
    {
        std::cout<<p->data<<" ";
        p = p->pri;
    }
    std::cout<<std::endl;
}



