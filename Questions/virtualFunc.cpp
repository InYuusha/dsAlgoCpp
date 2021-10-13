#include<iostream>
using namespace std;

class Shape{
protected:
    int l,b;
public:
    Shape(int a=0,int b=0):l(a),b(0){}
    virtual int area(){
        cout<<"Parent class area ";
        return 0;
    }
};

class Rectangle:public Shape{
    public:
    Rectangle(int a=0,int b=0):Shape(a,b){}
    int area(){
        cout<<"Rectangle class area ";
        return 0;
    }
};
class Triangle:public Shape{
    public:
    Triangle(int a=0,int b=0):Shape(a,b){}
    int area(){
        cout<<"Triangle class area ";
        return 0;
    }
};
int main(){
    Shape*shape;
    Rectangle rect;
    Triangle tri;

    shape=&rect;
    cout<<shape->area()<<endl;

    shape =&tri;
    cout<<shape->area()<<endl;
}