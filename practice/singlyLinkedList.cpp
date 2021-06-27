 
 // Singly Linked List

#include <iostream>
using namespace std;

struct Node{
  
    int data;
    Node *next;
};

struct lList{

    void display();
    void remove(int pos);
    void create(); // create linked list(user input)
    Node* getNode(); // create a single node
    void append(Node*); // append that single node

    lList() //constructor
    {
        head = NULL;
    }
    // data members
    private:
    Node *head, *tail;
};

void lList::create(){
    Node *newNode;
    char res;
    while(1){
        cout << "Any More Nodes to be created ?(y/n)";
        cin >> res;
        if(res=='n'||res=='N'){
            break;
        }

        newNode = getNode();
        append(newNode);
    }
}

Node* lList::getNode(){
    Node *node;
    node = new Node();
    cout << "Enter the value";
    cin >> node->data;
    node->next = NULL;

    return (node);
}

void lList::append(Node* newNode){
    if(head==NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
void lList:: remove(int pos){
    Node *tmp= head;
    int count = 0;
    while (count<pos-1)
    {
        tmp = tmp -> next;
        count++;
    }
    tmp->next = (tmp->next)->next;
}

void lList::display(){
    Node *tmp = head;
    while(tmp!=NULL){
        cout << tmp -> data<<"\t";
        tmp = tmp->next;
    }
}

int main(){
    lList li;
    li.create();
    li.display();
    li.remove(2);
    li.display();
}
