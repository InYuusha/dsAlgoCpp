#include <iostream>
#include <vector>
using namespace std;
                                      
void getInput(vector<int> &arr){
    int read, val;
    cout << "Enter  values ";
    while (cin >> val)
    {

        if(read =arr.size()){
        arr.resize(arr.size() * 2 + 1);
        arr[read++] = val;
       }
    }
    arr.resize(read);
}

int main(){
    vector<int> arr;
    getInput(arr);
    for (int i = 0; i < arr.size();i++){
        cout << arr[i] << "\t";
    }
    return 0;
}