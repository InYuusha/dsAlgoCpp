#include <iostream>
using namespace std;

class Node{
    public:
      char data;
      Node *lNode ,*rNode;

};
class bTree{
    private:
      Node *root;
    public:
      bTree(){
          root=NULL;
      }
      void postOrderTraversal();  
};
class stack{
    private:
     Node *stk[50];
     char data;
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
     Node* pop(){
         return stk[top--];
     } 
};
class stack1{
    private:
     char flags[50];
     int top;
    public:
     stack1(){
         top=-1;
     }
     int empty(){
         if(top==-1){
             return 1;
         }
         return 0;
     }
     void push(char f){
         flags[++top]=f;
     }
     char pop(){
         return flags[top--];
     } 
};
void bTree::postOrderTraversal(){
    Node * tmp;
    tmp=root;
    stack s;
    stack1 f;char flag;
    while(1){
        while(tmp!=NULL){
            s.push(tmp);
            f.push('L');
            tmp=tmp->lNode;
        }
        if(s.empty()){
            return;
        }
        else{
            tmp=s.pop();
            flag=f.pop();
            
            if(flag=='R'){
                cout<<tmp->data;
                tmp=NULL;
            }
            else{
                s.push(tmp);
                f.push('R');
                tmp=tmp->rNode;
            }

        }
    }

    
}