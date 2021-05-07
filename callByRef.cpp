#include <iostream>
using namespace std;

void fun(int&x){
    x=x+10;

}
int main(){
    int num =5;
    fun(num);
    cout<<"Num is "<<num;
    return 0;

}