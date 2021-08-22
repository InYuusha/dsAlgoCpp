#include <iostream>
using namespace std;



void reArrange(int arr[],int n){
    int newArr[n];

    //create a copy of arr (coz values of arr are going to change)
    for(int i=0;i<n;i++){
        newArr[i]=arr[i];
    }
   
    for(int i=0;i<n;i++){

        int pro =1;

        //get produuct of EL's ahead
        if(i!=n-1){
            for(int j=i+1;j<n;j++){
                pro*=newArr[j];   
            } 
        }
        //get product of EL's behind
        if(i!=0){
            for(int k=i-1;k>=0;k--){
                pro*=newArr[k];
            }
        }
        arr[i]=pro;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    reArrange(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}