#include <iostream>
#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> subArr(int arr[],int S,int n){
    unordered_map<int,int> mp;
    vector<pair<int, int>> out;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(mp.find(sum)==mp.end()){     //does not exists
            mp[sum] = i;
        }
        if(mp.find(sum-S)!=mp.end()){
            int first = mp[sum - S];
            out.push_back(make_pair(first+1, i));
        }
    }
    return out;
}
int main(){
    int arr[] = {1, 2, 4, 6, -3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    auto out = subArr(arr, 8, n);
    for (auto it = out.begin(); it != out.end();it++){
        cout << it->first << " " << it->second << "\n";
    }
}