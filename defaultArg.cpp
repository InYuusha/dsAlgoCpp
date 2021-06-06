#include <iostream>
using namespace std;

void fun(int b,int a=5){
    cout<<a<<b;
}

int main(){
    fun(10,20);

    return 0;
}
