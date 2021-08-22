
#include <iostream>
using namespace std;

class Node{
    public:
      int data;
      Node *link;
};
class lList{
    private:
      Node *head,*tail;

      void recursiveTraverse(Node *tmp){
          if(tmp==NULL){
              return;
          }
          cout<<tmp -> data;
          recursiveTraverse(tmp->link);

      }
    public:
     lList(){
         head=NULL;
     }
     ~lList();
     void create();
     void display();
     Node *getNode();
     void sort();
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
void lList::create(){
    char ans;
    Node *newNode;
    while(1){
        cout<<"Any More Nodes to be added (Y/N) ?";
        cin>>ans;
        if(ans=='n') break;
        newNode = getNode();
        append(newNode);
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
Node *lList::getNode(){

    Node *NewNode;
    NewNode = new Node;
    cout<<"Enter the Node value";
    cin>>NewNode->data;
    NewNode -> link= NULL;

    return (NewNode);
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
void lList::sort(){
    Node* tmp, *index;
    tmp = head;  index = tmp->link;
    while(tmp->link!=NULL){
        index = tmp->link;
       
        while(index!=NULL){
            if(tmp->data>index->data){
                int val = tmp->data;
                tmp->data=index->data;
                index->data = val;
            }
            index=index->link;
        }
        tmp=tmp->link;

    }
}

int main(){
lList li;
li.create();
li.display();
li.sort();
cout<<"\n";
li.display();
return 0; 

}
