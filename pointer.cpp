#include<iostream>
using namespace std;

// Code for pointer 
int main()
{   int a=4;
    int * b =&a;
    //Address 
    cout<<"Address of a :"<<b<<endl;
    cout<<"Address of a :"<<&a<<endl;
    //Value at address
    cout<<"Value at address of a :"<<*b<<endl;
    //pointer to pointer
    int **c =&b;
    cout<<"Address of b :"<<c<<endl;
    cout<<"Value at c :"<<*c<<endl;
    cout<<"Value at address value at value at c :"<<**c<<endl;
    return 0;
}