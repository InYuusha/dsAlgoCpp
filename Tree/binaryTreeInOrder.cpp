#include <iostream>
using namespace std;

class Node{
    public:
     Node *lNode,*rNode;
     char data;
};
class bTree{
    private:
     Node *root;
    public:
     bTree(){
         root=NULL;
     }
     void traverseInOrder(); 
};
class stack{
    private:
     Node *stk[50];
     int top;
    public:
     stack(){
         top=-1;
     }
     int empty(){
         if(top==-1){
             return 1;
         }
         return 0;
     }
     void push(Node *x){
         stk[++top]=x;
     }
     Node * pop(){
         return stk[top--];
     } 
    
};
void bTree::traverseInOrder(){
    Node * tmp;
    stack s;
    tmp=root;
  while(1){
        while(tmp!=NULL){
        s.push(tmp);
        tmp=tmp->lNode;
    }
    //break the loop if stack is empty
    if(s.empty()) return;
    
    tmp=s.pop();
    cout<<tmp->data;
    tmp=tmp->rNode;
  }
}
