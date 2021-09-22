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
    cout<<"\n";
    arr=new int[15];//resized
    
    //cannot append over previous one
    //as new array of size 15 els
    for(int i=10;i<15;i++){
        arr[i]=i;
    }

       for(int i=0;i<15;i++){
        cout<<arr[i];
    }

    delete []arr;
    cout<<"\nMemory freed successfully";
}
//memory can we resized, but have to copy paste the previous array elements 
//in the newly created array