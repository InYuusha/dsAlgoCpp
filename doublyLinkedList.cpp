
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
    //list is mt
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
            // if tail to be del
            if(curr==tail){
                //make the prev of tail
                //the new tail
                tail=curr->prev;
                tail->next=NULL;
                delete curr;
            }
            else{
                //connect the right and left
                //nodes of tmp & del tmp
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
  //del head
  if(pos==1){
      head=head->next;
      head->prev=NULL;

      delete tmp;
  }
  else{
      //traverse till pos
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
          //if tail to be del
          if(tmp==tail){
              //make the prev of tail the new tail
              tail=tail->prev;
              tail->next=NULL;
              delete tmp;
          }
          else{
              //connect the right and left
              //nodes of tmp & del tmp
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
   //if list is empty
   if(head==NULL){
       head=tail=newNode;
   }
   else {
       //add node before head
       if(pos==1){
           head->prev=newNode;
           newNode->next=head;
           head=newNode;
       }
       else{
           //go till the pos
           while(count!=pos){
               //traverse
               tmp=tmp->next;
               if(tmp!=NULL){
                   count++;
               }
               else{
                   break;
               }
           }
           if(tmp!=NULL){
               if(tmp==tail){
               tail->next=newNode;
               newNode->prev=tail;
               tail=newNode;
           }
           else{
               //newNode to be placed between tmp & tmp->prev

               //prev of tmp will be prev of newNode
               (tmp->prev)->next=newNode;
               newNode->prev=tmp->prev;

               //tmp next to newNode & newNode prev to tmp;
               newNode->next=tmp;
               tmp->prev=newNode;
           }
         }
         else{
             cout<<"Position Not found " ;
         }
       }
   }
}
int main(){
    
    //object
    dList li;
    li.create();
    li.traverse();
    li.delAtPos(1);
    li.traverse();
    

    return 0;
}