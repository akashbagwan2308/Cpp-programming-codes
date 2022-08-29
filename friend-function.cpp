#include<iostream>
using namespace std;

// Code for More on C++ Friend Functions (Examples & Explanation) | C++ Tutorials for Beginners #28

class Y;
class X{
        int data;
        public:
        void setValue(int value){
            data= value;
        }
       friend void add(X, Y);
};
class Y{
    int num;
    public:
    void setValue(int value){
        num = value; 
    }
    friend void add(X, Y);
};
void add(X o1,Y o2){
    cout<<"Summing data of X and Y objects gives  "<< o1.data + o2.num;
}
int main()
{    X a1;  
    a1.setValue(3);
    Y b1;
    b1.setValue(5);

    add(a1,b1);
    
    return 0;
}