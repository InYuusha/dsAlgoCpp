

#include<iostream>
using namespace std;

class vector{

    int arr[3];

    friend istream &operator>>(istream&,vector&);
    
    friend ostream &operator<<(ostream&dout,vector&a);

};\[p=o 9o 
istream & operator>>(istream&din,vector&a){

    for(int i=0;i<3;i++){
        din>>a.arr[i];
    }
    return din;
} 

ostream & operator<<(ostream&dout,vector&a){

    for(int i=0;i<3;i++){
        dout<<a.arr[i];
    }
    return dout;
}

int main(){
    vector v;
    cout<<"Enter three values ";

    cin>>v;                         //invokes the operator>>() function
    cout<<"The vector is"<<v<<"\n"; //invokes the operator<<() function

}











