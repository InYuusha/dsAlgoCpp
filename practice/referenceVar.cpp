#include <iostream>
using namespace std;


int main(){

    int a = 3;
    int &b = a;
    int &c = b;

    cout << b<<"\n";

    cout << c<<"\n";

    c = 4;

    cout << a;
}