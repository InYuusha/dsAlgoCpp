#include<iostream>
using namespace std;

int main(){
    typedef int* Intptr;
    int arr[10];
    Intptr ptr;

    for(int i=0;i<10;i++){
        arr[i] =i;
    }

    ptr =arr; //ptr points to arr
    
    //change ptr
    for(int i=0;i<10;i++){
        ptr[i]=i*2;
    }
    //changes also reflected in arr
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }

}