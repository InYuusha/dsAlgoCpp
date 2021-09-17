#include<iostream>
using namespace std;



void insertionSort(int arr[],int n){
    int el,j,i;
    for(i=1;i<n;i++){
        el = arr[i];
        j=i;
        while(j>0 && arr[j-1]>el){ //traverse back only if previous el are greater
            arr[j] = arr[j-1]; //move the el's one place ahead
            j--;
        }                    
        arr[j]=el;       //puts the small el in the last
    }
}

int main(){
    int arr[]={5,2,1,8,6};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sort ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    insertionSort(arr,n);
    
     cout<<"\nAfter Sort ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}