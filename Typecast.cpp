#include<iostream>
using namespace std;
/*code for Reference variable and 
type casting(i.e change of datatype) 
c++ program */
int main()
{  
    /*****Reference Variable ,means the same 
      item with different identity****/
    float x = 45;
   float &y =x;
   cout<<"The value of x is :"<<x<<endl<<"the value of y is :"<<y<<endl;
   
   /*****Type casting *****/
   int f = 34;
   float g = 45.36;
   cout<<"The value of f :"<<(float)f<<endl;
   cout<<"The value of f :"<<float(f)<<endl;  // Both are same way to typecast
   cout<<"The value of g :"<<(int)g<<endl;
   cout<<"The value of g :"<<int(g)<<endl; // Both are same way to typecast

   cout<<"The expresstion is :"<<f+g<<endl;
   cout<<"The expresstion is :"<<f+(int)g<<endl;
   cout<<"The expresstion is :"<<f+int(g)<<endl;
    return 0;
}  