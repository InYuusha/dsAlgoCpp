#include <iostream>
using namespace std;

int main(){

    int *num;
    num=new int(20);
    cout<<num<<"\n";
    cout<<*num<<"\n";

    delete num;

    cout<<*num<<"\n";
  

    return 0;
}