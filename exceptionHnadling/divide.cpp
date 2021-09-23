#include<iostream>
using namespace std;

class divideByZero{};

int divide(int a,int b)throw(divideByZero){

    if(b==0)
        throw divideByZero();
    return a/b;    
}
int main(){

    int a=5,b=0;
    int res;

    try{
        res = divide(a,b);
    }
    catch(divideByZero){ //if err exit

        cout<<"Divide by zero exception closing...";
        exit(0);
    }
    cout<<"Result is "<<res; //if !err

}