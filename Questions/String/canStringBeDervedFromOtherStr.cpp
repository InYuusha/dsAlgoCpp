#include<iostream>
#include<algorithm>

using namespace std;


bool isRotated(string str1,string str2){

    if(str1.length()!=str2.length())
        return false;

    for(int i=0;i<str2.length();i++){

        rotate(str2.begin(),str2.begin()+1,str2.end());

        if(str1==str2)
            return true;
    }
    return false;
}

int main(){
    bool res;
    string s1,s2;
    s1="ABCD";
    s2="BCDA";

    res = isRotated(s1,s2);
    cout<<res;
}