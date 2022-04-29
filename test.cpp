#include <iostream>
#include<bits/stdc++.h>           //[2,1,3,5,4] [1,2,3,4,5]
using namespace std;

void findPair(vector<int> vc,int target){
    int l = vc.size()-1;
    
    int j=l,i=0;
    sort(vc.begin(),vc.end());
    
    while(i<j){
        if(vc[i]+vc[j] > target)
            j--;
        else if(vc[i]+vc[j] < target){
            i++;
        }else if(vc[i]+vc[j] == target){
            cout<<"Pair Found "<<vc[i]<<" "<<vc[j];
            return;
        } 
    }
    return;
}

int main(){
    vector<int>vc={8,7,0,5,3,1};
    findPair(vc,10);
}