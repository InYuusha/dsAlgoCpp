#include<iostream>
using namespace std;

bool isPalindrone(char str[],int n){
   
    for(int i=0,j=n-1;(i<n,j>=0)&&i!=j;i++,j--){

        if(str[i]!=str[j])
        return false;
    }
    return true;
}

int main(){
    char str[]="rammar";
    int n= sizeof(str)/sizeof(str[0]);
    bool res=isPalindrone(str,n-1);
    cout<<"String is palindrone ? "<<res;
}