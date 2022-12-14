// OOPS - classes and objects
    // You can declare objects along with the class declatation like this:
    //  class Employee{
    //      //class declaration
    //  }akash,jay ,surendra;
    //  akash.salary = 6 , makes no sence if salary is private
    //  Nested of member function
    
#include <iostream> 
#include <string>

using namespace std;

// Code for OOPs Recap & Nesting of Member Functions in C++ | C++ Tutorials for Beginners #22
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}
void binary ::ones_complement(void)
{ // to find ones complement
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{ 
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}