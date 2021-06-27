#include <iostream>
#include <vector>

using namespace std;

/*int sum(int el,vector <int>arr){
    int sum = 0;
    for (int i = 0; i <= arr.size(); i++)
    {
        sum += arr[i];
    }
    sum += el;
    return sum;
}*/
int main(){
  /*   vector<int> arr = {2, 1, 3, 4, 6, 5};
     arr.push_back(9); arr.pop_back();
     for (auto it = arr.begin(); it != arr.end(); it++)
     {
          cout << " " << *it;
     }
    
    */
  int arr1[] = {2, 4, 6, 8};
  int arr2[] = {3, 5, 7, 9};
  int n = sizeof(arr1) / sizeof(arr1[0]);
  vector<pair <int,int>> arr;
  for (int i = 0; i < n; i++)
  {
       arr.push_back(make_pair(arr1[i], arr2[i]));
  }
  //display
  for (int j = 0; j < n;j++){
       cout << "first: " << arr[j].first<<"second: "<<arr[j].second<<"\n";
       
  }
}
