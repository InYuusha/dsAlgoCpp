#include <iostream>
using namespace std;

class complex {
    int x, y;
    public:
    complex (){}
    complex(int real,int imag){
        x = real;
        y = imag;
    }
    complex operator+(complex);

    void display(){
        cout << x << "+i" << y<<"\n";
    }
};
complex complex::operator+(complex c){

        complex tmp;
        tmp.x = x + c.x;
        tmp.y = y + c.y;
        return tmp;
    }
int main(){
    complex c1, c2, c3;
    c1 = complex(3, 4);
    c2 = complex(1, 2);

    c3 = c1+c2;

    c1.display();
    c2.display();
    c3.display();

    return 0;

}
