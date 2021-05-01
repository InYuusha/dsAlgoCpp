#include <iostream>
using namespace std;

 int main(){
 int num=5;
 int *ptr=&num;

 cout<<"\nThis is the value "<<*ptr;
 cout<<"\n This is the address "<<ptr;

 //if we change the value of ptr
 //value of num will also change
 *ptr=10;
 cout<<"\nvalue of num "<<num;
 cout<<"\nvalue of ptr "<<*ptr;

    return 0;
}

