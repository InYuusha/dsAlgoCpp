#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplet(vector<int> &arr)
{
    vector<vector<int>> vc;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size() - 2; i++)
    {
        if (i == 0 || arr[i] != arr[i + 1] && i > 0)
        {
            int l = i+1, h = arr.size() - 1;

            while (l < h)
            {
                vector<int> tmp;

                if (arr[i] + arr[l] + arr[h] == 0)
                {
                    tmp.push_back(arr[i]);
                    tmp.push_back(arr[h]);
                    tmp.push_back(arr[l]);
                    vc.push_back(tmp);

                    while (l < h && arr[l] == arr[l + 1])
                        l++;
                    while (l < h && arr[h] == arr[h - 1])
                        h--;

                    l++;
                    h--;
                }
                if (arr[i] + arr[l] + arr[h] > 0)
                    h--;
                else
                    l++;
            }
        }
    }
    return vc;
}

int main()
{
        vector<int> vc = {-1,0,1,2,-1,-4};


    vector<vector<int>> arr = findTriplet(vc);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}