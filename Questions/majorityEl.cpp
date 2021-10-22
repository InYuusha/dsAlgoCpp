
#include<iostream>
#include<map>
using namespace std;

/*int majorEl(int arr[],int n){

    map<int, int> count;
    map<int, int>::iterator it;

    for (int i = 0; i < n; i++)
    {
        if(count.find(arr[i])==count.end()){
            count[arr[i]] = 1;
        }
        else{
            count[arr[i]]++;
        }
    }
    it = count.begin();
    int el = it->first;
    int times = it->second;
    while (it != count.end())
    {
        if(it->second>times){
            el = it->first;
            times = it->second;
        }
        it++;
    }
    return el;
} */

int majorityEl(int arr[],int n){
    
    map<int,int>mp;

    for(int i=0;i<n;i++){

        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]=1;
        }
        else{
            mp[arr[i]]++;
        }
    }
    auto it=mp.begin();
    int el = it->first;
    int times = it->second;

    for(;it!=mp.end();it++){

        if(it->second>times){
            times=it->second;
            el=it->first;
        }
    }
    return el;
}

int main(){
    int arr[] = {2, 1, 4, 2, 3, 4, 3, 3,};
    int n = sizeof(arr) / sizeof(arr[0]);

    int el = majorityEl(arr, n);
  
        cout << el;
}