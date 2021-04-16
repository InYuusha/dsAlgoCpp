#include <iostream>
using namespace std;

int main(){
    char arr[6]="Hell\0";
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }



    return 0;
}