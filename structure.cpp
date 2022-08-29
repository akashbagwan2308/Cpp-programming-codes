#include<iostream>
using namespace std;

// Code for structure
struct employee
    {
        int id;
        char favchar;
        float salary;
    };
// typedef struct employee      //  use of typedef  
//     { 
//         int id;
//         char favchar;
//         float salary;
//     } ep;
int main()
{   //structure is the collection of items of d different datatype
    struct employee akash;     // ep.akash    as because after using typedef we can put ep on the place of struct employee
    akash.id = 5;
    akash.favchar = 'A';
    akash.salary = 50000000;
    cout<<"The id is "<<akash.id<<endl;       
    cout<<"The favchar is "<<akash.favchar<<endl;       
    cout<<"The salary is "<<akash.salary<<endl;       
    
    return 0;
}