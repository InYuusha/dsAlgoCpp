#include<iostream>
using namespace std;

void counter(char arr[],int n){
     
     int vowelCount = 0, alphaCount = 0;
     
     for(int i=0;i<n;i++){
          switch(arr[i]){
               case 'a':
               case 'e':
               case 'i':
               case 'o':
               case 'u':
                    vowelCount++;
                    break;
               default: 
                    alphaCount++;
                    break;     

          }
     }
     cout<<"Vowel Count "<<vowelCount;
     cout<<"Alpha Count "<<alphaCount;
}
int main(){
     char arr[]="Hellojhgio";
     counter(arr,10);


}