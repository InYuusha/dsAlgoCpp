#include <iostream>
using namespace std;

int binarySearch(int arr[],int n, int l){
    int mid = l/2;
    if(n<arr[mid]){
        for(int i=0;i<mid;i++){
            if(n==arr[i]){
                return i;
            }
        }
    }
    else{
        if(n>arr[mid]){
            for(int i=l-1;i>mid;i--){
                if(n==arr[i]){
                    return i;
                }
            }
        }
        else{
            if(n==arr[mid]){
                return mid;
            }
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,3,5,6,9};
    int res = binarySearch(arr,10,5);
    cout<<res;
    return 0;
}