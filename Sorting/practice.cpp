#include <iostream>
#include<bits/stdc++.h>
using namespace std;



vector<pair<int,int>> findMaxLengthSubArray(int arr[],int n,int s){

unordered_map<int,int> mp;
vector<pair<int,int>> vc;
int sum =0;

for(int i=0;i<n;i++){
    sum+=arr[i];

    if(mp.find(sum) == mp.end()){
        mp[sum] = i;
    }
    if(mp.find(sum-s)!=mp.end()){
        int first = mp[sum-s];
        vc.push_back({first+1,i});
    }
}
return vc;

}


int main()
{
    int arr[] = {1,2,-1,3,-2,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto vc = findMaxLengthSubArray(arr,n,4);

    for(auto it=vc.begin();it!=vc.end();it++){
        cout<<it->first<<", "<<it->second<<"\n";
    }
   
}