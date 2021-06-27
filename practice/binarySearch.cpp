#include <iostream>
#include <vector>

int binarySearch(std::vector<int>&arr,int value){
    int mid = 0 + arr.size() / 2;

    if(value<arr[mid]){
        for (int i = 0; i < mid;i++){

            if(arr[i]==value)
                return i;
        }
        return -1;
    }
    else{
          if(value>arr[mid]){
          for (int i = mid+1; i<arr.size();i++){

            if(arr[i]==value)
                return i;
        }
        return -1;
      }
      else {
          if(value==arr[mid]){
              return mid;
          }
      }
    }
    return -1;
}

int main(){
    std::vector<int> arr = {2,4,5,7,8,9};
    int value = 8;
    int res = binarySearch(arr, value);
    std::cout << "Value found at " << res;
    return 0;
}