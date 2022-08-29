#include <iostream>
using namespace std;

// Code for Static Data Members & Methods in C++ OOPS | C++ Tutorials for Beginners #24
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
};
int Employee ::count; // default value is zero
int main()
{
    Employee akash, jay, surendra;
    akash.setData();
    akash.getData();

    jay.setData();
    jay.getData();

    surendra.setData();
    surendra.getData();

    return 0;
}