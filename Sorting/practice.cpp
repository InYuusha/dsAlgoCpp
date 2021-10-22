#include <iostream>
using namespace std;

/*void swap(int &a,int &b){

    int tmp = a;
    a = b;
    b=tmp;
}

int getSmall(int arr[],int start,int n){

    int small =arr[start];
    int index = start;

    for(int i=start;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
            index =i;
        }
    }
    return index;
}

void selectionSort(int arr[],int n){

    for(int i=0;i<n;i++){
      
        int s = getSmall(arr,i,n);
        swap(arr[i],arr[s]);
    }
}
*/

/*void insertionSort(int arr[],int n){

    for(int i=1;i<n;i++){
        int el=arr[i];
        int j=i;

        while(j>0&&arr[j-1]>el){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=el;
    }
}
*/
/*void merge(int arr[],int l,int mid,int r){
    
    int n1 = mid-l+1;
    int n2 =  r-mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=l;

    while(i<n1&&j<n2){

        if(a[i]<b[j]){
            arr[k++]=a[i++];
            
        }
        else{
            arr[k++]=b[j++];
            
        }
    }
    while(i<n1){
        arr[k++]=a[i++];      
        
    }
    while(j<n2){
        arr[k++]=b[j++];
        
    }
}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid =(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
*/
void swap(int *a,int*b){

    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int partition(int arr[],int l,int h){

    int j=l-1;
    int pivot = arr[h];
    
    for(int i=l;i<h;i++){

        if(arr[i]<=pivot){
            swap(&arr[++j],&arr[i]);
        }
    }
    swap(&arr[j+1],&arr[h]);
    return j+1;
}

void quickSort(int arr[],int l,int h){
    
    if(l<h){
        int pivot =  partition(arr,l,h);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,h);
    }
}

int main(){
    int arr[]={5,2,1,8,6};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sort ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    //selectionSort(arr,n);
    //insertionSort(arr,n);
    //mergeSort(arr,0,n-1);
    quickSort(arr,0,n-1);
    
     cout<<"\nAfter Sort ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}