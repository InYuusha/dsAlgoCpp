#include<iostream>
using namespace std;

void reArrange(int arr[],int n){

    for (int i = 0; i < n;i++){
        if(arr[i]==0){
            int j;
            for (j = i; j < n-1; j++)
            {
                arr[j] = arr[j+1];
            }
            arr[j] = 0;
        }
    }
}
int main(){
    int arr[] = {2, 1, 0, 3, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    reArrange(arr, n);
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
}