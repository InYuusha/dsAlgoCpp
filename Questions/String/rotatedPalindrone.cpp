
//Q- Check if a string is a rotated palindrome or not

/* for example
CBAABCD is rotated palindrone of  ABCDCBA  
BAABCC is rotated palindrone of ABCCBA */

#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

bool isPalindrone(string str){ //check if a string is palindrone or not
    for(int i=0,j=str.length()-2;(i<str.length()-1,j>=0)&&i!=j;i++,j--){
        if(str[i]!=str[j])
            return false;
    }
    return true;
}

bool isRotatedPalindrone(string str){   //rotate string 'length' times
                                        //check if its palindrone or not
    for(int i=0;i<str.length();i++){    //for each rotation
        rotate(str.begin(),str.begin()+1,str.end());

        if(isPalindrone(str))
            return true;
    }
    return false;
}
int main(){
    string str="ADAFF";
    bool res = isRotatedPalindrone(str);
    cout<<res;
}




