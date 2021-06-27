#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string *s1 = new string("Hello World");

    string *s2 = s1;

    delete s1;

    cout << s1;
    cout << s2;

    cout << *s1;
    cout << *s2;c

    return 0;
}