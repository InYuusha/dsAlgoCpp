
#include <iostream>
using namespace std;

class space{
    int x, y, z;

    public:
        void getData(int,int,int);
        void display();
        void operator-();
        
};
void space::display(){
    cout << x<<"\t" << y<<"\t" << z<<"\n";
}
void space:: operator-(){
    x = -x;
    y = -y;
    z = -z;
}
void space::getData(int h,int i,int j){
    x = h;
    y = i;
    z = j;
}

int main(){
    space S;
    S.getData(10,-4,8);
    S.display();

    -S; // activates operator-() function

    S.display();
}







