#include <iostream>
using namespace std;

class foo{

   private:
       int a,b;
    public:
       friend void sum(foo f);
       void display();
       void input();

};
void foo::display(){
    cout<<"\nThe values of a and b are "<<a<<" "<<b;
}
void sum(foo f){
    cout<<"\nThe sum of a and b is "<<f.a+f.b;
}
void foo:: input(){
    cout<<"\nEnter the values of a and b ";
    cin>>a>>b;
}
int main(){
    foo x;
    x.input();
    x.display();
    sum(x);
    return 0;
}