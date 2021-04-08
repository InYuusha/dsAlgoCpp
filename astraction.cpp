#include <iostream>
using namespace std;

class Adder{

    public:

      Adder(int i=0){
          total=i;
      }
      void addNum(int num){

          total+=num;
      }

      int getTotal(){
          return total;
      }
    private:
      int total;  

};
int main(){

    Adder a;

    a.addNum(2);
    a.addNum(3);
    
   int t= a.getTotal();

   cout << "Total is " << t;

    return 0;
}