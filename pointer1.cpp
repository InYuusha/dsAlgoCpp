
#include <iostream>
using namespace std;
int main() 
{
   int var =5;
  //pointer decalration
   int *ptr;

// storing the add. of var in pointer
   ptr=&var;

   cout << ptr << endl; //address of var
   cout << "value before change" << *ptr << "\n"; //value of var
   cout << "value of var before change" << var << "\n";

   //changing the value on the pointer(not the add.)
   *ptr = 10;

   cout << "value after change" << *ptr << "\n";
   cout<< "value of var after change" << var << "\n";
}


/* 
     NOTE
     
 (1) *ptr is a value
 (2) ptr is a address
 (3) var is value
 (4) &var is a address

 */