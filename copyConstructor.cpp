

#include<iostream>

using namespace std;

class foo{

        int id;

        public:
        foo(){}        // --(1)

        foo(int a){    //--(2)
            id = a;
        }
        foo(foo & x){   //-- (3)
            cout << "Iam Called";
            id = x.id;
        } 
        void display(){
            cout << "Id is " << id<<"\n";
        }
};

int main(){
    foo a(100);
    foo b(a);

   // a.display();
    //b.display();

    foo d;
    d = a; //copy constructor is called
    d.display();

    return 0;
}
