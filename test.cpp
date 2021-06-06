#include <iostream>
using namespace std;

class foo {
    int a,b;
    public:
    void input();
    
};
void foo::input(){
    cout<<"Enter the values of a and b ";
    cin>>a>>b;

}
int main(){
    foo p;
    p.input();
    cout<<p.a;
     return 0;
}