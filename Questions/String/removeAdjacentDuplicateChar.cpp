#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
/*
int removeDuplicate(char str[],int n){
    int k=0;
    char prev='\0';

    for(int i=0;i<n;i++){

        if(prev!=str[i]){
            str[k++]=str[i];
        }
        prev=str[i];    
    }
    return k;
}


*/
int removeDuplicate(char str[],int n){
    char prev='\0';
    int k=0;
    
    for(int i=0;i<n;i++){

        if(prev==str[i]){
            continue;
        }
        else{
            str[k++]=str[i];
            prev=str[i];
        }
    }
    return k;
}

int main(){

    char str[]="AAABBCAC";
    int n= sizeof(str)/sizeof(str[0]);
    int k = removeDuplicate(str,n);

    for(int i=0;i<k;i++){
        cout<<str[i];
    }
}