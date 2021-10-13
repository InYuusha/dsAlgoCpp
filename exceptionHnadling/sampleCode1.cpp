#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age ?";
    cin>>age;

   try{
       
        if(age>100)
        throw age;


        cout<<"Your age is "<<age;
   }
   catch(int e){
       cout<<e<<"years? Are you serious??";
   }

}

