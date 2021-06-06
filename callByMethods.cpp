#include <iostream>
using namespace std;

// Call by value
  void swap(int x, int y){

    int temp;
    temp =x;
    x=y;
    y=temp;
    cout << "X and Y After Swap" << x << y << "\n";

}

int main(){
    int a=5,b=10;
    cout << "A and B before Swap" << a <<b << "\n";
    swap(a,b);

    cout << "A and B After Swap" << a << b << "\n";

    return 0;
}


//Call By Reference using pointer
/*
 void swap(int *x, int *y){

    int temp;
    temp =*x;
    *x=*y;
    *y=temp;

    cout << "X and Y After Swap \t" << *x << *y << "\n";

}

int main(){
    int a=5,b=10;

    cout << "A and B before Swap \t" << a <<b << "\n";

    swap(&a,&b);

    cout << "A and B After Swap \t" << a << b << "\n";

    return 0;
}
*/