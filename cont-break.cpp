#include<iostream>
using namespace std;

// Code for break and continue statement
int main()
{  // code for break statement
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        if (i==2)
        {
           break;
        }
    }
    // code for break statement
    for (int i = 5; i < 10; i++)
    {
                if (i==8)
        {
           continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}
