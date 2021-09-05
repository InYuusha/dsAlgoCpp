#include<iostream>
using namespace std;

void swap(int* a,int *b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

void bubbleSort(int arr[],int n){
   for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
        if(arr[i+1]<arr[i]){
            swap(&arr[i],&arr[i+1]);
        }
    }
   }
}

int main(){
    int arr[]={2,3,4,1,5};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sort ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    bubbleSort(arr,n);
    
     cout<<"\nAfter Sort ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}