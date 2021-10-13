
#include<iostream>
using std::cout;
using std::endl;

template<class T>
void swap(T &var1,T &var2){

    T tmp = var1;
    var1=var2;
    var2=tmp;
}

int main(){
    
    int a=2,b=3;
    char i='A',j='B';
    
    cout<<"'A' Before Swap = "<<a<<", 'B' Before Swap = "<<b<<endl;
    swap(a,b);  //swapping two int values
    cout<<"'A' After Swap = "<<a<<", 'B' After Swap = "<<b<<endl;

    cout<<"\n";

    cout<<"'I' Before Swap = "<<i<<", 'J' Before Swap = "<<j<<endl;
    swap(i,j);  //swapping two char values
    cout<<"'I' After Swap = "<<i<<", 'J' After Swap = "<<j<<endl;
    
}


