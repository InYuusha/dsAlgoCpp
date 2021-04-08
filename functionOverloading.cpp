#include <iostream>
using namespace std;

class Print{

    public:
     void print(int n){
         cout << "Printing Int " << n << "\n";
     }
     void print(double f){
         cout << "Printing Float" << f << "\n";
     }
     void print(char* n){
         cout << "Printing Char" << *n << "\n"; 
     }
};
int main(){
    Print pd;
    pd.print(5);

    pd.print(10.3);

    pd.print('a');
    return 0;


}