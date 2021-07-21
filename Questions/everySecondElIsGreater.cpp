#include<iostream>
using namespace std;
#include<bits/std

void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
    boo
}
void reArrange(int arr[],int n){
    for (int i = 1; i < n-1;i+=2){
       
            if(arr[i]<arr[i-1]){
                swap(&arr[i], &arr[i - 1]);
            }
            if(arr[i]<arr[i+1]){
                swap(&arr[i], &arr[i + 1]);
            }
        
    }
}
int main(){
    int arr[] = {6, 9, 2, 5, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    reArrange(arr, n);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}