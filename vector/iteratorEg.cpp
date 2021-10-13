#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;
    vector<int> :: iterator it=arr.begin();

    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(3);

    it=arr.begin();
    while(it!=arr.end()){
        cout<<*it;
        it++;
    }
    
}