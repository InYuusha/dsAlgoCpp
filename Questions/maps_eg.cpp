#include<iostream>
#include <bits/stdc++.h>

using namespace std;

// key should be unique

//map<int, int>::iterator it=mp.begin();

int main(){
    unordered_map <int, int> mp;
    mp.insert(make_pair(2, 3));
    bool res = mp.find(2) == mp.end(); //key "2" exists so false 
    cout << res;                       //if does not exists then true

    /* mp.insert(make_pair(5, 8));
    mp.insert({3,4});
    while (it != mp.end())
    {
        cout << it->first;
        cout << "\t"
             << it->second << "\n";
        it++;
    }
    auto pt = mp.end();
    cout << "\n after " << pt->first<<" "<<pt->second;
    */
}
