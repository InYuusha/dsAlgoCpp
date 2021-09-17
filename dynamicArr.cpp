#include<iostream>
using namespace std;

int main(){
    typedef int* Intptr;
    Intptr arr;

    arr= new int[10];

    for(int i=0;i<10;i++){
        arr[i]=i;
    }

     for(int i=0;i<10;i++){
        cout<<arr[i];
    }

    delete []arr;
    cout<<"\nMemory freed successfully";
}