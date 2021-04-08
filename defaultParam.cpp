#include <iostream>
using namespace std;

//default param
void test(int a=0){
    
  cout << "Value of a" << a;
}

int main(){

    test(10);
    return 0;
}