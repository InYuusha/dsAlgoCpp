#include <iostream>
using namespace std;

class dNode{

    public:
     int data;
     dNode *prev ,*next;
     dNode(){
         prev=next=NULL;
     }
     
};

class dList{
    private:
     dNode *head ,*tail;
    public:
     dList(){
         head=tail=NULL;
     }
     void create();
     dNode *getNode();
     void append(dNode *newNode);
     void traverse();
     void delNode(int val);
     void delAtPos(int pos);
     void insertPos(dNode *newNode,int pos);
     
};
dNode *dList::getNode(){
    dNode *newNode;
    newNode= new dNode;
    cout<<"Enter data ";
    cin>>newNode->data;
    newNode->prev=newNode->next=NULL;
    return (newNode);
}
void dList::append(dNode *newNode){
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}
void dList::create(){
    char ans; dNode *newNode;

    while(1){
         cout<<"Any More nodes to be created ?";
         cin>>ans;
         if(ans=='n') break;
         newNode = getNode();
         append(newNode);
    }
   
}
void dList::traverse(){
    dNode *curr;
    curr=head;
    cout<<"\n";
    if(curr==NULL){
        cout<<"The list is empty ";
    }
    else{
        while(curr!=NULL){
            cout<<curr->data;
            curr=curr->next;
        }
    }
}
void dList::delNode(int val){
    dNode *curr;
    curr=head;

    while(curr!=NULL){
        if(curr->data==val) break;
        curr=curr->next;
    }
    if(curr!=NULL){
         if(curr==head){

            head=head->next;
            head->prev=NULL;
            delete curr; 
        }
        else {
            if(curr==tail){

                tail=curr->prev;
                tail->next=NULL;
                delete curr;
            }
            else{
                (curr->prev)->next=curr->next;
                (curr->next)->prev=curr->prev;

                delete curr;

            }
        }
    }
    else{
        cout<<"Node to be deleted not Found ";
    }
   

}
void dList::delAtPos(int pos){
  dNode *tmp; int count=1;
  tmp=head;
  if(pos==1){
      head=head->next;
      head->prev=NULL;

      delete tmp;
  }
  else{
      while(count!=pos){
          tmp=tmp->next;
          if(tmp!=NULL){
              count++;
          }
          else{
              break;
          }
      }
      if(count==pos){
          if(tmp==tail){
              tail=tail->prev;
              tail->next=NULL;
              delete tmp;
          }
          else{
          (tmp->prev)->next=tmp->next;
          (tmp->next)->prev=tmp->prev;
          delete tmp;
         }
      }
      else{
          cout<<"Position Not found ";
      }
      
  }
 
}
void dList::insertPos(dNode*newNode,int pos){
   dNode *tmp; int count=1;
   tmp=head;
   if(head==NULL){
       head=tail=newNode;
   }
   else {
       if(pos==1){
           head->prev=newNode;
           newNode->next=head;
           head=newNode;
       }
       else{
           while(count!=pos){
               tmp=tmp->next;
               if(tmp!=NULL){
                   count++;
               }
               else{
                   break;
               }
           }
           if(tmp==tail){
               tail->next=newNode;
               newNode->prev=tail;
               tail=newNode;
           }
           else{
               (tmp->prev)->next=newNode;
               newNode->prev=tmp->prev;

               newNode->next=tmp;
               tmp->prev=newNode;
           }
       }
   }
}
int main(){
    dList li;
    li.create();
    li.traverse();
    li.delAtPos(1);
    li.traverse();
    

    return 0;
}