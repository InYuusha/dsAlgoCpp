#include <iostream>
using namespace std;

void swap(int*a,int *b){

    int tmp = *a;
    *a = *b;
    *b=tmp;
}

int getSmall(int arr[],int start,int n){

    int small =arr[start];
    int index = start;

    for(int i=start;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
            index =i;
        }
    }
    return index;
}

void selectionSort(int arr[],int n){

    for(int i=0;i<n;i++){
      
        int s = getSmall(arr,i,n);
        swap(&arr[i],&arr[s]);
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