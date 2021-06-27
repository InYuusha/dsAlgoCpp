

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/* int duplicateEl(int arr[],int n){
    for (int i = 0; i < n-1;i++){
        int el = arr[i];
        for (int j = i + 1; j < n;j++){
            if(arr[j]==el){
                return el;
            }
        }
    }
    return -1;
} */
unordered_map<int, bool> mp;
int duplicateEl(int arr[], int n)
{
    for (int i = 0; i < n;i++){
        if(mp[arr[i]]==true)
            return arr[i];
        mp[arr[i]] = true;
    }
    return -1;
}

int main(){
    int a[] = {2, 4, 3,1,4};
    int n = sizeof(a) / sizeof(a[0]);
    int res = duplicateEl(a, n);
    cout << res;
}
