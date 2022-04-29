#include <iostream>
#include <vector>
using namespace std;
   /*                                   
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
*/
void swap(int*a,int*b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
vector<int> reverse(vector<int>vc){

    int k=vc.size()-1;
    int i=0;

    while(i<k){
        swap(&vc[i++],&vc[k--]);
        
    }

    return vc;
    
}

int main(){

    vector<int>vc={1,2,3,4};
    vector<int>rev=reverse(vc);
    for(auto it=rev.begin();it!=rev.end();it++)
        cout<<*it<<" ";

}