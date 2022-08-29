#include <iostream>
using namespace std;

// Code for Array of Objects & Passing Objects as Function Arguments in C++ | C++ Tutorials for Beginners #25
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{ // Employee Akash , Jay , Surendra , Harsha ;
    // Akash.setId();
    // Akash.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}