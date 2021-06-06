#include <iostream>
using namespace std;

class unit{
    int a,b;
    void read(){
        cout<<"The value of a and b is "<<a<<" "<<b;
    }
    public:
    void input();
    void update();

};
void unit::input(){
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
}
void unit::update(){
    read();
}
int main(){
    unit p;
    p.input();
    p.read() //error cannot access private members
    p.update();
    return 0;
}