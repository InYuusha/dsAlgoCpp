#include<iostream>
using namespace std;

class car{

   int price;

    protected:
    int id;

   public:
    car();
   void setPrice(int);
   void setId(int);
   int getPrice();
   int getId();

};
car::car():price(0),id(1){};

void car::setPrice(int cost){
    price = cost;
}
void car::setId(int isbn){
    id = isbn;
}

int car::getPrice(){
    return price;
}
int car::getId(){
    return id;
}

class automobile:public car{
    int vehiclePrice;
    int cid;
    public:
    int getCid(){
        cid=id*2;
        return cid;
    }

};
int main(){
    automobile a1;
    a1.setPrice(200);
    a1.setId(1234);
    
    cout<<a1.getPrice();
    cout<<"\n";
    cout<<a1.getCid();
    

}