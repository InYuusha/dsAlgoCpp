#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    int minpos,temp;
    for(int i=0;i<n-1;i++){
        minpos=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minpos]){
                minpos=j;
            }
        }
        if(minpos!=i){
            temp=arr[minpos];
            arr[minpos]=arr[i];
            arr[i]=temp;
        }
        
    }

}
int main(){
    int arr[]={2,1,4,3,7,5,6};
    cout<<"\nBefore sort\n";
    for(int i=0;i<7;i++){
        cout<<"\t"<<arr[i];
    }
    selectionSort(arr,7);

    cout<<"\nAfter sort\n";
    for(int i=0;i<7;i++){
        cout<<"\t"<<arr[i];
    }
    return 0;
}