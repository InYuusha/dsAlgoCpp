
// Insert a node to its correct sorted position in a sorted linked list
//                                         08/7/21   

#include<iostream>
using namespace std;

// struct are public by default
// class are private by default
//both of them have some data (data members) 
//and some methods(member functions)

struct Node{          
    int data;      // --------------
    Node *next;    // | da   |  ne  |___next node___
};                 // | ta   |  xt  |
                   // --------------     
struct lList{     //       Node
  
    lList(){
        head=tail=NULL;
    }
    void create(); //     => create linked list
    Node* createNode(); //=> create node
    void display(); //    =>  display lList
    void putNode(int val); //=> put node in 
                //         =>  correct sorted pos
    private:
      Node *head ,*tail;
};

void lList::create(){
    char res;
    Node * newNode;

    //Infinite Loop
    while(1){
        cout<<"More Nodes to be Added ? ";
        cin>>res;

        //if no exit loop
        if(res=='n') break;

        //Create Node
        newNode=createNode();

        // if lList is empty
        if(head==NULL){
            head=tail=newNode;
        }
        //if not empty append
        // newNode at end
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
}

Node* lList :: createNode(){

    Node* newNode; int value;

    cout<<"Enter the value";
    cin>>value;
    //"new" allocates memory(type Node)
    // and returns the addr of it
    newNode = new Node();

    //"data" of newNode is "user-input(value)"
    // "next" of newNode is NULL(default)
    newNode->data=value;
    newNode->next=NULL;

    return newNode;
}

void lList::display(){

    //type declaration
    Node * tmp;

    //initialize tmp to head
    tmp=head;

    // stop when tmp is null(end)
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
   
}
void lList::putNode(int val){
    Node * newNode,*tmp;
    //new allocates memory(type Node)
    // and returns the addr of it
    newNode = new Node();
    newNode->data =val;

    //initialize tmp to 1
    tmp=head;

    //Goes till 3 in (1 2 3 4)
    while(tmp->next!=NULL){

        // if LHS is smaller and RHS is greater
        // insert newNode btwn then
        if(tmp->data<val&&(tmp->next)->data>val){
            newNode->next=tmp->next;
            tmp->next=newNode;
            return;
        }
        tmp=tmp->next;
    }



    //Else Append at End
    tmp->next=newNode;
    tail=newNode;
}

int main(){
    //object of type lList
    lList li;

    //methods on it
    li.create();
    li.display();

    li.putNode(4);   //put node of value "4"
    cout<<"After putting Node \n";
    li.display();
  
}

 // github : https://github.com/InYuusha




 




