#include <iostream>
using namespace std;

int main(){

 int total =10;
 int &sum = total;
 cout<<"Sum is "<<sum;

 sum=20;

 cout<<"total is "<<total;



    return 0;
}