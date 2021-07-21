#include <iostream>
using namespace std;

void swap(int x[],int i,int y[],int j){

    int tmp = x[i];
    x[i] = y[j];
    y[j] = tmp;
}

void merge(int x[],int m,int y[],int n){
    for (int i = 0; i < m;i++){
        if(x[i]>y[0]){
            swap(x, i, y, 0);

            for (int k = 0; k < n;k++){
                for (int m = 0; m < n-1;m++){
                    if(y[m+1]<y[m]){
                        int tmp = y[m + 1];
                        y[m + 1] = y[m];
                        y[m] = tmp;
                    }
                }
            }
        }
        
    }
}

        int main()
        {
            int x[] = {2, 5, 7, 8, 10};
            int y[] = {1, 3, 6,9};
            int m = sizeof(x) / sizeof(x[0]);
            int n = sizeof(y) / sizeof(y[0]);
            merge(x, m, y, n);
            cout << "X\n";
            for (int i = 0; i < m; i++)
            {
                cout << x[i] << " ";
            }
            cout << "Y\n";
            for (int i = 0; i < n; i++)
            {
                cout << y[i] << " ";
            }
        }