#include <iostream>
#include <bits/stdc++.h>
using namespace std;
  vector<pair<int, int>> subArr;
    unordered_map < int, vector<int> >mp;
    unordered_map < int, vector<int> >::iterator it=mp.begin();

vector<pair<int,int>> sum(int arr[],int n){
  
    int sum = 0;

    for (int i = 0; i < n;i++){
        sum += arr[i];
        if(sum ==0){
            subArr.push_back(make_pair(0, i));
        }
       
        if (mp.find(sum) != mp.end())
        {
            vector<int> vc = mp[sum];
            for (auto it = vc.begin(); it != vc.end();it++){
                subArr.push_back(make_pair(*it+1, i));
            }
        }
        mp[sum].push_back(i);
    }
    return subArr;
}
 int main(){
     int  v[] = { 4, 2, -3, -1, 0, 4 };
     vector <pair<int,int> > vc  = sum(v, 7);

     for (auto it = vc.begin(); it != vc.end();it++){
         cout << it->first << " " << it->second<<"\n";
     }

  
 }
