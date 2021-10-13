#include<iostream>
using namespace std;

template<class T>

//Cubic sol
/*int maxSum(T arr[],int n){

    T maxSum=0 ;
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){

            T thisSum=0;
            for(int k=i;k<=j;k++)
                thisSum+=arr[k];
            
            if(thisSum>maxSum){
                maxSum=thisSum;
            }
        }
    }
    return maxSum;
}
*/
//quadratic sol
int maxSum(T arr[],int n){
    T max=0;
    for(int i=0;i<n;i++){

        T thisSum=0;
        for(int j=i;j<n;j++){

            thisSum+=arr[j];

            if(thisSum>max){
                max=thisSum;
            }
        }
    }
    return max;
}
int main(){
    int arr[]={-2, 11 , -4 , 13, -5, 2};
    int n= sizeof(arr)/sizeof(arr[0]);

    auto sum =maxSum(arr,n);
    cout<<"Max Sum is "<<sum;
}