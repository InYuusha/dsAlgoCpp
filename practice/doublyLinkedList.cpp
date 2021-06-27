#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;
};

struct dList{
    dList();       //constructor
    
    void create();
    Node *getNode();
    void append(Node*);   //member functions
    void display();
    void delAtPos(int);

private:
    Node *head, *tail;       //data members
};
//Member Functions :--
dList::dList() : head(NULL), tail(NULL){}; 

void dList::create(){
    Node *newNode;
    char res;
    while(1){
        cout << "Any More Nodes to be added?(y/n)";
        cin >> res;
        if(res=='n')
            break;
        newNode = getNode();
        append(newNode);
    }
}
Node* dList::getNode(){
    Node *newNode;
    newNode = new Node();
    cout << "Enter the value";
    cin >> newNode->data;
    newNode->prev = newNode->next = NULL;

    return (newNode);
}

void dList::append(Node* newNode){
    if(head==NULL){
        head = tail = newNode;
    }
    else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void dList::display(){
    Node *tmp = head;
    while(tmp!=NULL){

        cout << tmp -> data<<"\t";
        tmp = tmp->next;
    }
}

void dList:: delAtPos(int pos){
    Node *tmp = head;
    int count = 0;
    while (count<pos){  //go to the node to be del
        tmp = tmp->next;
        count++;
    }
    if(tmp!=NULL){
        if(tmp==head){     //if head to be del
            (head->next)->prev = NULL;
            head = tmp->next;   
        }
        else{
            if(tmp==tail){     //if tail to be del
                (tmp->prev)->next = NULL;
                tail = tmp->prev;
            }
            //maybe some inner node to be del
            else{
                   //del that Node;
                    (tmp->prev)->next = tmp->next;
                    (tmp->next)->prev = tmp->prev;
            }
        }
        delete tmp;
    }
    else
        return;
}


int main(){
    dList li;
    li.create();
    li.display();
    li.delAtPos(1);
    cout << "\n";
    li.display();
}