#include <iostream>
#include <string.h>
using namespace std;

int main(){
    
    string *str;
    str = new string("Hello World");
    cout << "The length is " << (*str).length()<<endl;

    *str += " Whats up!";
    cout << "The new length is " << (*str).length();

    delete str;

    return 0;
}
