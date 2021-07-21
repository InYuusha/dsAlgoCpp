#include <iostream>
#include <bits/stdc++.h>

using namespace std;



vector<pair<int,int>> maxProduct(int arr[], int n)
{
    
    int pro = 1;
    vector< pair<int, int>> vc;

    for (int i = 0; i < n - 1; i++)
    {
        int el = arr[i];
        for (int j = i+1; j < n;j++){
            if(el*arr[j]>=pro){
                pro = el * arr[j];
                vc.push_back(make_pair(arr[i], arr[j]));
            }
        }
    }
    return vc;
}

int main(){

    int a[] = {2, 1, 3, 4, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);
    auto res = maxProduct(a, n);
    for (auto i = res.begin(); i != res.end();i++){
        cout << i->first << " " << i->second << "\n";
    }
}