#include<iostream>
using namespace std;

// Code for Recursions & Recursive Functions in C++ | C++ Tutorials for Beginners #18
int factorial(int n)
{   if (n<= 1)
    { return 1;
    }
    return n* factorial(n-1);
}
int fib(int n)
{   if(n<2)
    {   return 1;
    }
    return fib(n-2)+fib(n-1);
}
 int main()
{   //factorial of a number
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci at position "<<a<<" is "<<fib(a)<<endl;

    return 0;
}