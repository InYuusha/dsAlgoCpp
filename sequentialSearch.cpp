#include <iostream>
using namespace std;

int seqSearch(int arr[],int key,int n){
    int flag=0;int pos;
    for(int i=0;i<n;i++){

        if(key==arr[i]){
            flag=1;
            pos=i;
            break;

        }
    }
    if(flag==1){
        return pos;
    }
    return -1;
    
}
int main(){
    int arr[10]={2,4,1,5,6,6};
    int found =seqSearch(arr,6,5);
    if(found!=-1){
        cout<<"\nFound at "<<found;
    }
    else cout<<"Not Found ";
    
    return 0;

}