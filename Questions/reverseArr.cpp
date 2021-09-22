#include<iostream>
using namespace std;

void swap(int*a,int*b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void reverse(int arr[],int n){
    for(int i=0,j=n-1;(i<n,j>=0)&&i!=j;i++,j--){
        swap(&arr[i],&arr[j]);
    }
}

int main(){
    int arr[]={5,2,1,8,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Before reverse ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    reverse(arr,n);
    
     cout<<"\nAfter reverse ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}