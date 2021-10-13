#include <iostream>
using namespace std;
class stack{
 private:
   Node *stk[50];
   int top ,data;
 public:
   stack(){
       top=-1;

   }
   void push(Node *x){
       stk[++top]=x;
   }
   int empty(){
       if(top==-1){
           return 1;
       }
       else return 0;
   }
   Node* pop(){
       return stk[top--];
   }

};
class Node {
    public: 
      char data;
      Node *lNode,*rNode;

};
class bTree{
    private:
      Node *rootNode;
    public:
      bTree(){
          rootNode=NULL;
      }  
      Node * getNode();
      void insertNode(Node*);
      void deleteNode(Node*);
      void postOrder(Node*);
      void preOrder();
      void inOrder(Node*);
};
void bTree::preOrder(){
    Node* tmp;
    stack s;
    tmp=rootNode;

    while(1){
        while(tmp!=NULL){
          s.push(tmp);
          cout<<tmp->data;
          tmp=tmp->lNode;
        }
        if(s.empty()) return;
        tmp=s.pop();
        tmp=tmp->rNode;

    }
}