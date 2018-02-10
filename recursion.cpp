
#include<iostream>

///求阶乘
int factorial(int n)
{
    int s=1;
    if(!n)
        s = 1;
    else
        s *= n * factorial(n-1);
    return s;
}

///求第n个斐波那契数
int fibonacci(int n)
{
    int s;
    if(n == 1 || n == 2)
        s = 1;
    else
        s = fibonacci(n-1) + fibonacci(n-2);
    return s;
}

void move(char x, char z)
{
    static int i;
    ++i;
    std::cout<<i<<": "<<x<<"->"<<z<<std::endl;
}

void hanoi(int n, char x, char y, char z)
{
    if(n == 1)
        move(x, z);
    else
    {
        hanoi(n-1, x, z, y);
        move(x, z);
        hanoi(n-1, y, x, z);
    }

}

int main()
{
    std::cout<<"5! = "<<factorial(5)<<std::endl;
    std::cout<<"第四个斐波那契数是："<<fibonacci(4)<<std::endl;
    hanoi(5, 'A', 'B', 'C');
    return 0;
}


/// 2018.2.2

