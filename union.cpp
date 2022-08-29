#include<iostream>
using namespace std;

// Code for union
union money
    {
        int rice;     // at a time you can use only one of these
        char car;
        float pounds;
    }; 
int main()
{  // union is used for better memory managment
    union money ep;
    ep.rice = 14;
    ep.car = 'A';
    cout<<ep.rice<<endl;
    
    return 0;
}