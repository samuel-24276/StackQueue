#include<iostream>
const int MAXSIZE=10;

template <class T>
class Stack
{
    T data[MAXSIZE+1];
    int top;
public:
    Stack();
    Stack(T a[], int n);
    int GetLength();
    bool isEmpty();
    bool isFull();
    bool push(T a);
    bool pop(T& a);
    void print();
    T& GetTop();
};

template <class T>
Stack<T>::Stack()
{
    top = 0;
}

template <class T>
Stack<T>::Stack(T a[], int n)
{
    if(n<1 || n>MAXSIZE)    throw"空间不足";
    for(int i=0; i<n; ++i)
        data[i] = a[i];
    top = n;
    data[top] = n;
}

template <class T>
bool Stack<T>::isEmpty()
{
    if(top == 0)
        return true;
    return false;
}

template <class T>
bool Stack<T>::isFull()
{
    if(top == MAXSIZE)
        return true;
    return false;
}

template <class T>
bool Stack<T>::push(T a)
{
    if(isFull())    return false;
    data[top+1] = data[top]+1;
    data[top] = a;
    ++top;
    return true;
}

template <class T>
bool Stack<T>::pop(T& a)
{
    if(isEmpty())   return false;
    a = data[top-1];
    data[top-1] = data[top]-1;
    --top;
    return true;
}

template <class T>
T& Stack<T>::GetTop()
{
    return data[top-1];
}

template <class T>
int Stack<T>::GetLength()
{
    return data[top];
}


template <class T>
void Stack<T>::print()
{
    std::cout<<"当前栈内元素有：";
    for(int i=top-1; i>=0; --i)
        std::cout<<data[i]<<" ";
    std::cout<<std::endl;
}




