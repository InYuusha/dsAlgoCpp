#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool isAnagram(string str1,string str2){
    unordered_map<int,int> mp;

    if(str1.length()!=str2.length())
        return false;

    for(char c:str1)
        mp[c]++;

    for(char c:str2){
        if(mp.find(c)==mp.end())
            return false;

        mp[c]--;

        if(!mp[c]){
            mp.erase(c);
        }
    }
    if(!mp.size()){
        return true;
    }else return false;    
}

int main(){
    string s1,s2;
    bool res;

    s1 = "kmp";        // Tom Marvolo Riddle
    s2 = "mkp";

    res = isAnagram(s1,s2);
    cout<<res; 
}