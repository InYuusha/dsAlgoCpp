#include <iostream>
using namespace std;

void insertionSort(int arr[],int n){
    int el,i,j;
    for(i=1;i<n;i++){
        el=arr[i];
        j=i;
        while(j>0 && arr[j-1]>el){
            arr[j]=arr[j-1];
            j--;

        }
        arr[j]=el;

    }
}
int main(){
    int arr[]={5,2,1,8,6};
    cout<<"Before Sort\n";
    for(int i=0;i<6;i++){
        cout<<"\t"<<arr[i];
    }
    insertionSort(arr,6);

      cout<<"\nAfter Sort\n";
    for(int i=0;i<6;i++){
        cout<<"\t"<<arr[i];
    }


}