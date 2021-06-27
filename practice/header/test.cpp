#include "intCell.h"
#include <iostream>

using namespace std;

int main(){
    char str[6] = "hello";
    intCell a;
    a.write(5);
    cout << a.read()<<"\n";
}