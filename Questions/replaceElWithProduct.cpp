
#include<iostream>
using namespace std;

void replace(int arr[],int n){
    int tmp[n];
    for (int i = 0; i < n; i++)
    {
        tmp[i] = arr[i];
    }
   

    for (int i = 0; i < n; i++)
    {
        int pro = 1;
        
        if(i!=n-1){
            int j = i + 1;
            while (j < n)
            {
            pro *= tmp[j++];  
            }
       }
       
        if(i!=0){
            int k = i - 1;
            while(k>=0){
                pro *= tmp[k--];
             }
          }
        arr[i] = pro;
    }
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    replace(arr, n);
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}