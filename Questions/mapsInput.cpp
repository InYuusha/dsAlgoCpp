#include <iostream>
#include <map>
#include <string>

using namespace std;

map<int, string> mp;
map<int, string>::iterator it;

int main(){
    char res;
    int i = 0;
    
    while (1)
    {
        char str[50];
        cout << "Wanna put value?(y/n)";
        cin >> res;
        if(res=='n')
            break;
        cout << "Enter the string";

        cin >> str;
        mp[i] = str;
        i++;
    }
    for (it = mp.begin(); it != mp.end();++it){
        cout << it->first << "\t" << it->second << "\n";
    }
}   