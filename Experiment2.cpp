#include<iostream>
using namespace std;

// Code for finding area of circle ,rectangle and triangle using function overloading
float area(int a){
    //Area of circle
    cout<<"Using function with 1 argument"<<endl;
    return 3.14*a*a; 
}
float area(int a,int b){
    //Area of rectangle
    cout<<"Using function with 2 argument"<<endl;
    return a*b;
}
float area(int a,int b,int c){
    //Area of triangle
    cout<<"Using function with 3 argument"<<endl;
    return 0.5*a*b;
}
int main()
{  cout<<"The area of circle with radius 6 is "<<area(6)<<endl;
   cout<<"The area of rectangle with lenght 7 and breadth 6 is "<<area(7,6)<<endl;
   cout<<"The area of triangle with base4 and height 6 is "<<area(4,6,0)<<endl;
    
    return 0;
}