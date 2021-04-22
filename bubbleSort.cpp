#include <iostream>
using namespace std;

void bubbleSort(int arr[],int l){

    for(int n=1;n<l;n++){
         for(int i=0;i<l;i++){
            
          if(arr[i]>arr[i+1]){

            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
      }
    
  }
    }


}
int main(){
   
    int arr[6]={2,5,1,6,3,8};
    bubbleSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    return 0;
}