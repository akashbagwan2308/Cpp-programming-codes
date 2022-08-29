#include<iostream>
#include<iomanip>

using namespace std;
//code for constant , manipulators and operator precedence c++ program
int main()
{     //normal program
    int a= 5;
    cout<<"The value of a is "<<a<<endl;
    a= 15;
    cout<<"The value of a is "<<a<<endl; // now the value of a is changed 
    // Contant in c++
    const int b= 5;
    cout<<"The value of b is "<<b<<endl;
    // b= 15; // this will show error as 'b' is a constant
    cout<<"The value of b is "<<b<<endl; // here the value of b is unchanged
    //Manipulators in c++
    int p=2,q=45,r=556;
    cout<<"The value of p without setw is "<<p<<endl;
    cout<<"The value of q without setw is "<<q<<endl;
    cout<<"The value of r without setw is "<<r<<endl;

    cout<<"The value of p with setw is "<<setw(4)<<p<<endl;  // here each data acquire 4 place  
    cout<<"The value of q with setw is "<<setw(4)<<q<<endl;  // here each data acquire 4 place
    cout<<"The value of r with setw is "<<setw(4)<<r<<endl;  // here each data acquire 4 place

    //Operators precedence in c++
    int k=5,l=12;
    //int m = k*5+l; 
    int m = ((((k*5)+l)-3)+10); // first apply precedence then check associativity
    cout<<m;
    return 0;
}  