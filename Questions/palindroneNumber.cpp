#include<iostream>
using namespace std;

bool isPalindrone(int x){

    int t = 0; int tmp = x;
    
    while(x){
        t = t*10 + x%10;
        x = x/10;
    }
    
    return t == tmp;
}

int main(){
    bool res = isPalindrone(121);
    cout<<res;
}