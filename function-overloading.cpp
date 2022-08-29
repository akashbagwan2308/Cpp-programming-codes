#include<iostream>
using namespace std;

// Code for Function Overloading with Examples in C++ | C++ Tutorials for Beginners #19
int sum(int a,int b){
    cout<<"Using function with 2 argument"<<endl;
    return a+b; 
}
int sum(int a,int b,int c){
    cout<<"Using function with 3 argument"<<endl;
    return a+b+c;
}
int main()
{  cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
   cout<<"The sum of 3 ,7 and 6 is "<<sum(3,7,6)<<endl;
    
    return 0;
}