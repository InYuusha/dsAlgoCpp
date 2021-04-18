#include <iostream>
using namespace std;

class Node{
    public:
     int key;
     Node *lNode ,*rNode;

};
class bSTree{
    private:
     Node *root;

    public:

     bSTree(){
         root = NULL;
     }
    
     Node* insertNode(int key); 
     void deleteNode(int key);
     Node* search();

};
Node* bSTree::insertNode(int key){
    Node* tmp , *newNode,*y;
    newNode= new Node;
    newNode->key=key;
    newNode->lNode=newNode->rNode=NULL;

    tmp=root;
    if(tmp==NULL){
        root=newNode;
        return;
    }
    while(tmp!=NULL){
        y=tmp;
        if(tmp->key>key){
            tmp=tmp->lNode;
        }
        else{
            tmp=tmp->rNode;
        }

    }
    if(y->key>key){
        y->lNode=newNode;
    }
    else{
        y->rNode=newNode;
    }
    return y;

}
Node* bSTree::search(int key){
    Node * tmp;
    tmp=root;

    while(tmp!=NULL){
        if(tmp->key==key){
            return tmp;
        }
        else {
            if(tmp->key>key){
                tmp=tmp->lNode;
            }
            else tmp=tmp->rNode;
        }

    }
    return NULL;

}

