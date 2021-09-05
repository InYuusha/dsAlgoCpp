// Move the front node of a linked list in front of another list

//      Input------->
//First List: 1 —> 2 —> 3 —> null
//Second List: 6 —> 4 —> 2 —> null

//         Output ------>
//First List: 6 —> 1 —> 2 —> 3 —> null
//Second List: 4 —> 2 —> null 

#include <iostream>
using namespace std;

class Node{
    public:
      int data;
      Node *link;
};
struct lList{
   
      Node *head,*tail;

      void recursiveTraverse(Node *tmp){
          if(tmp==NULL){
              return;
          }
          cout<<tmp -> data;
          recursiveTraverse(tmp->link);

      }
    
     lList(){
         head=NULL;
     }
     ~lList();
    
     void display();
     void push(int data);
     void append(Node *newNode);
     void insertAtPos(Node *newNode , int pos);
     void traverse(){
         recursiveTraverse(head);
         cout<<endl;
     }
     void deleteNode(int pos);
     

};
lList::~lList(){
    Node *tmp;
    while(head!=NULL){

        tmp=head;
        head=head->link;
        delete tmp;

    }
}

void lList::append(Node *newNode){
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->link=newNode;
        tail=newNode;
    }

}
void lList::push(int data){

    Node *NewNode;
    NewNode = new Node;
    NewNode->data=data;
    NewNode -> link= NULL;

    append(NewNode);
}
void lList::display(){
    Node *tmp;
    tmp=head;
    
    if(tmp==NULL){
        cout<<"Empty lList ";
    }
    else{
        while(tmp!=NULL){

             cout<<tmp->data<<"\t";
             tmp=tmp->link;
        }
       
    }
}
void lList::deleteNode(int pos){
  Node *tmp,*curr;int flag=1,i=1;
  tmp=head;
  if(pos==1){
      head=head->link;
      delete tmp;
  }else{

      while(i<pos-1){
          tmp=tmp->link;
          if(tmp==NULL){
              flag=0;break;
          }

      }
      if(flag==1){
          curr=tmp->link;
          tmp->link=curr->link;
          delete curr;
      }
      else cout<<"Position Not found";
  }

}
void moveNode(lList *a,lList* b){
    Node * newNode;

    newNode =b->head;
     b->head =(b->head)->link; //detach the ndoe from lList b first

    newNode->link=a->head; //attach it to lList a
    a->head = newNode;

}

int main(){
lList a,b;
int keys[]={1,2,3,4};
int n= sizeof(keys)/sizeof(keys[0]);

for(int i=0;i<n;i++){
    a.push(keys[i]);
}

for(int i=0;i<n;i++){
    b.push(keys[i]*2);
}

a.display();
cout<<"\n";
b.display();
moveNode(&a,&b);
cout<<"\n";
a.display();
cout<<"\n";
b.display();


return 0; 

}
