#include<iostream>
#include<map>

using namespace std;
map<int, bool>mp;

int rmDuplicate(int arr[],int n){
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if(mp[arr[i]]==1){
            continue;
        }
        mp[arr[i]] = 1;
        arr[k++] = arr[i];
    }
    return k;
}
int main(){
    int arr[] = {2, 1, 2,3,4,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int t=rmDuplicate(arr, n);
    for (int i = 0; i < t;i++){
        cout << arr[i] << " ";
    }
}
 