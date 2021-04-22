#include <iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int key){
      int mid;
    if(low<=high){
        mid =(low+high)/2;
        if(key==arr[mid]){
            return mid;
        }
        else {
            if(key<arr[mid]){
                return binarySearch(arr,low,mid-1,key);
            }
            else {
                if(key>arr[mid]){
                    return binarySearch(arr,mid+1,high,key);
                }
            }
        }
       
    }
    return -1 ;
   
}
int main(){
    int arr[5]={2,5,7,9,11};
    int res = binarySearch(arr,0,4,7);
    cout<<res;
    return 0;

    
}