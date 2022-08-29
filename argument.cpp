#include<iostream>
using namespace std;

// Code for Inline Functions, Default Arguments & Constant Arguments in C++ 
inline int product(int a, int b)  //Inline Functions
{  //static int c =0; // this executes only once on 1st call of function
    //c=c+1;
    //return a*b+c;
    return a*b;
}
int moneyReceived(int currentMoney, float factor = 1.04)  // Default argument
{
    return currentMoney*factor;
}
// int strlen(const char *p)   // constant argument
// {
//    }
int main()
{   // int a,b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 1000000;
    cout<<"If you received Rs."<<money<<" in your bank account ,you will receive Rs."<<moneyReceived(money)<<" after 1 year "<<endl;
    cout<<"For VIP: If you received Rs."<<money<<" in your bank account ,you will receive Rs."<<moneyReceived(money,1.10)<<" after 1 year "<<endl;
    return 0;
}