#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void swap(int *a,int*b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void shuffle(int arr[],int n){
    srand(time(NULL));

    for (int i = n - 1; i > 0;i--){
        int j = rand() % (i + 1);
        swap(&arr[i], &arr[j]);
    }
}
int main(){
    int arr[] = {2, 5, 1, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    shuffle(arr, n);
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
}