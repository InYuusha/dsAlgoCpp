#include<iostream>
using namespace std;


void merge(int x[],int m,int y[],int n){
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        if(x[i]!=0){
            x[k++] = x[i];
           
        }
        x[k]=
  
}
int main(){
    int x[] = {0, 2, 0, 3, 0, 5, 6, 0, 0 };
    int m = sizeof(x) / sizeof(x[0]);
    int y[] = {1, 8, 9, 10, 15 };
    int n = sizeof(y) / sizeof(y[0]);
    merge(x, m, y, n);
    for (int i = 0; i < m;i++){
        cout << x[i] << " ";
    }
}