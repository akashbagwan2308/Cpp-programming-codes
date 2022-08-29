#include<iostream>
using namespace std;

// Code for array
int main()
{   int marks[4] = {23,27,28,89};
    int i=0;
    // Printing array normally
   cout<<"Printing array normally "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    //printing array using do while loop
    cout<<"Printing array using do while loop "<<endl;
    do
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);
        //printing array using while loop
    cout<<"Printing array using while loop "<<endl;
    while (i<4)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    //printing array using for loop
    cout<<"Printing array using for loop "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    //pointers and array
     int *p = marks;
     cout<<"The value of marks[0] is "<<*p<<endl;
     cout<<"The value of marks[1] is "<<*(p+1)<<endl;
     cout<<"The value of marks[2] is "<<*(p+2)<<endl;
     cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    return 0;
}