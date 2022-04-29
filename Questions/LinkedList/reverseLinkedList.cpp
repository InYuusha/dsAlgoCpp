#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //constructor
    Node(int value):data(value),next(NULL){
        
    }
};

struct lList{
    Node*head;

    lList():head(NULL){}//constructor

    void push(int data);
    void display();
    void reverse();
};

void lList::push(int value){
    Node * newNode;
    newNode =new Node(value);

    newNode->next=head;
    head=newNode;
}
void lList::display(){
    Node*tmp;
    tmp=head;
    while(tmp!=NULL){
        cout<<tmp->data;
        tmp=tmp->next;
    }
}
/*void lList::reverse(){
 
    Node*current=head,*prev=NULL,*next=head;
    
    while(current!=NULL){
        next=current->next;
        current->next=prev;

        prev=current;
        current=next;

    }
    head=prev;
}
*/

void lList::reverse(){

    Node*current=head,*prev=NULL,*next=NULL;

    while(current!=NULL){

        next = current->next;
        current->next=prev;

        prev=current;
        current=next;
    }
    head=prev;
}

int main(){
    int arr[]={4,1,6,5,2};
    lList l1;
    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        l1.push(arr[i]);
    }
    l1.display();

    l1.reverse();
    cout<<"\n";

    l1.display();
    
    
}
