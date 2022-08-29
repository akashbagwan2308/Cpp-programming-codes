#include<iostream>
using namespace std;

// Code for call by value and call by reference

int sum(int a,int b)
{
    int c= a+b;
    return c;
}
void swap(int a, int b)  // this will not swap the values
{   int temp = a;
    a=b;
    b= temp;
}
void swapPointer(int *a, int *b)  // call by reference using pointer
{   int temp = *a;
    *a=*b;
    *b= temp;
}

int main()
{   int a=4,b=5;
    cout<<"The sum of 4 and 5 is "<<sum(a,b)<<endl;
    cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl;
    swap(a,b); // this will not swap the values
    swapPointer(&a,&b);  // call by reference using pointer
    cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl;
    return 0;
}