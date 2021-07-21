
#include <iostream>


void sort(int arr[],int n){

    int ze, ones, twoes;
    ze = ones = twoes=0;

    for (int i = 0; i < n;i++){

        if(arr[i]==0)
            ze++;
        if(arr[i]==1)
            ones++;
        if(arr[i]==2)
            twoes++;
    }

    int k = 0;
    while(ze!=0){
        arr[k++] = 0;
        ze--;
    }
    while(ones!=0){
        arr[k++] = 1;
        ones--;
    }
    while(twoes!=0){
        arr[k++] = 2;
        twoes--;
    }
}
int main(){
    int arr[] = {0, 2, 1, 1, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before Sort\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    sort(arr, n);
    
    std::cout << "After Sort\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}