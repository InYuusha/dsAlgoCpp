#include<iostream>
using namespace std;


int getMin(int arr[],int b,int n){

    int min = arr[b];
    int index =b;

    for(int i=b;i<n;i++){

        if(min>arr[i]){
            min = arr[i];
            index =i;
        }
    }
    return index;
}

void swap(int *a,int*b){
    int tmp = *a;
    *a = *b;
    *b=tmp;
}

void selectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){

        int minIndex = getMin(arr,i,n);
    
        swap(&arr[i],&arr[minIndex]);
    }
    
}

int main(){
    int arr[]={5,2,1,8,6};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sort ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    selectionSort(arr,n);
    
     cout<<"\nAfter Sort ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}