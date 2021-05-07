#include <iostream>
using namespace std;

void fun(int *ptr){
    *ptr=20;
}
int main(){
    int a=10;
    fun(&a);
    cout<<"m is "<<a;
    return 0;
}