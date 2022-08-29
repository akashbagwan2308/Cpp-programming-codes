#include<iostream>
using namespace std;
//code for multiplication table of any no using do while loop in c++ program
int main()
{   int num = 0, i = 0;
    cout<<"Enter the number for multiplication table :"<<endl;
    cin>>num;
    cout<<"Multiplication Table of "<<num<<"is"<<endl;
    do
    {
         cout<<num<<" * "<<i<<" = "<<num*i<<endl;
         i++;
    } while (i<=10);
    
    return 0;
}  