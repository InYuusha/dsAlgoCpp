#include <iostream>
using namespace std;

int ind (int arr[],int n){
    
    int maxCount = 0;
    int pos;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if(arr[i]==0){
            int j = i+1;
            while (arr[j]==1&&j<n){
                count++;
                j++;
            }
            if(i!=0){
                for (int k = i - 1; k >= 0 && arr[k]==1;k--){
                        count++;  
                }
            }
            if(count>maxCount){
                maxCount = count;
                pos = i;
            }
        }
    }
    return pos;
}
int main(){
    int arr[] = {0, 0, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = ind(arr, n);
    cout << res;
}