#include<iostream>

using namespace std;

void  binaryArr(int arr[],int n){

    int ze = 0,ones =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0)
            ze++;
        else
            ones++;
    }
    int k = 0;
    while (ze != 0)
    {
        arr[k++] = 0;
        ze--;
    }
    while(ones!=0){
        arr[k++] = 1;
        ones--;
    }
}

int main(){
    
    int a[] = {0, 1, 0, 1, 1, 0, 0};
    int n = sizeof(a) / sizeof(a[0]);
    cout << n;
    cout << "Before Sort ";
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    binaryArr(a, n);

    cout << "\nAfter Sort ";
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
}
