#include<iostream>
using namespace std;
//code for loops c++ program
int main()
{   /* types of loops in c++
      1.for loop
      2.while loop
      3.do while loop */
    // for loop
    int i;  
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
    }
    // while loop
    while (i<=4)
    {
        cout<<i<<endl;
        i++;
    }
    //do while loop
    do
    {
       cout<<i<<endl;
       i++;
    } while (i<=5);
    
    
    return 0;
}  