
#include<iostream>
using namespace std;

class complex{
    int real ,imag;

    public:

    complex(){};

    complex(int i,int j):real(i),imag(j){};

    void display(){
        cout<<real<<" + "<<imag<<"i";
    }

    complex operator+(complex  c2){

        complex sum;

        sum.real= real + c2.real;
        sum.imag = imag + c2.imag;

        return sum;
    }
    bool operator==(complex c2){
        return (real==c2.real&&imag==c2.imag);
    }
};

int main(){

    complex c1,c2,sum;

    c1=complex(1,2);
    c2=complex(2,3);

    sum = c1+c2;

    sum.display(); // 3+5i

    auto res = c1==c2;
    cout<<"\n"<<res;
    
}





