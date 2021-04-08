#include <iostream>
using namespace std;

class Shape{

    public:
      void setWidth(int w){
          width=w;
      }
      void setHeight(int h){
          height=h;
      }
    protected:
    int width;
    int height;    
};



class Cost{

    public:
     int getCost(int area){
         return 10*area;
     }
     
};

/* Class Rectangle inherting public and protected members from
 the base classes Shape and Cost */
class Rectangle: public Shape, public Cost{
    public:
     int getArea(){
         return width*height;
     }
      
};

int main(){

    Rectangle rect;

    rect.setWidth(10);
    rect.setHeight(5);

    int area = rect.getArea();
    int cost = rect.getCost(area);

    cout << "Area is " << area << "\n";
    cout << "Cost is " << cost;

    return 0;
}