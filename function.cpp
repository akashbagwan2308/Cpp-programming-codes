#include<iostream>
using namespace std;

// Code for function and function prototyping

int sum(int a,int b);    //function prototyping   or function declaration
// int sum(int a, b); --> not acceptable
// int sum(int,int); -->  acceptable
 
int main()
{   int num1,num2;  // num1 and num2 are actual parameters
    
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1 ,num2);  // function calling
    
    return 0;
}
int sum(int a,int b)   // function defining
{   int c = a+b;    // a and b are formal parameters
    return c;  
}