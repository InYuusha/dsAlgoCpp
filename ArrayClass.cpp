#include <iostream>
using namespace std;

class Array{
    private:
      int maxSize;
      int arr[20];
      int size;
    public:
     Array(){
         maxSize=20;
         size=0;
     }  
     void readArr();
     void displayArr();
     void traverseBackward();
     void insert();
     void del();
     
};
void Array::readArr(){

    int n;
    cout << "Enter The length of the array";
    cin >> n;
    if(n > maxSize){
        cout<<"Function cannot be created , Size exceeds max size";
        return;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<"Enter the " <<i << " the value \t";
            cin>>arr[i];

        }
        size=n;
    }
    

}
void Array::displayArr(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";

    }

}
void Array::traverseBackward(){
    for(int i=size-1;i>=0;i--){
        cout<<arr[i];
    }
}
void Array::insert(){
    int loc,el;

    cout<<"Enter the pos to insert";
    cin>>loc;
    cout<<"Enter the element to insert";
    cin>>el;
    for(int i=size+1;i>loc;i--){
        arr[i]=arr[i-1];

    }
    arr[loc]=el;
    size++;
    cout<<el<<" inserted at pos "<<loc<<"\n";

}
void Array::del(){
    int pos;
    cout<<"Enter the pos of element to del";
    cin>>pos;
    for(int i=pos;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"Element deleted \n";
}

int main(){
    Array a;
    a.readArr();
    a.displayArr();
    a.insert();
    a.displayArr();
    a.del();
    a.displayArr();
    return 0;
}