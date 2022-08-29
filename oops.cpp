#include<iostream>
using namespace std;

// Code for Object Oriented Programming in C++ | Classes, Public and Private access modifiers in C++ | C++ Tutorials for Beginners #21 

class Employee
{
    private:
      int a, b, c;
    public:
      int d ,e;
      void setdata(int a1, int b1,int c1 ); // declaration
      void getdata(){
          cout<<"The value of a is "<<a<<endl;
          cout<<"The value of b is "<<b<<endl;
          cout<<"The value of c is "<<c<<endl;
          cout<<"The value of d is "<<d<<endl;
          cout<<"The value of e is "<<e<<endl;
      }
};
void Employee :: setdata(int a1, int b1,int c1 )
{   a = a1;
    b = b1;
    c = c1;

}


int main()
{    Employee Akash;
     Akash.d = 45;
     Akash.e = 65;
     Akash.setdata(1,5,8);
     Akash.getdata();
    
    return 0;
}