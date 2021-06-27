

#include <iostream>
#include <string>
using namespace std;

struct box{
    string name;
    int num;
    box *next;
};

int main(){
    box *head;
    head = new box();
    head->name = "InYuusha";
    head->num = 20;

    cout << (*head).name<<"\n"; 
    cout << head->name<<"\n";

}






















