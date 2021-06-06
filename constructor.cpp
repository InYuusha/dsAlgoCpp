
#include <iostream>
using namespace std;

class Integer{
    int m ,n;
    public:
    Integer(int a,int b);
    auto display();
};
Integer::Integer(int a=0,int b=0){
    m=a;n=b;
 
}
auto Integer::display(){

    struct ret{
        int p1,p2;
    };
    return ret {m,n} ;
}
int main (){

    Integer i(2,4);

    auto [v1,v2]=i.display();
    cout<<"M is "<<v1<<"\n";
    cout<<"N is "<<v2<<"\n";

    return 0;
}



