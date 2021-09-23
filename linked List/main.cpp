#include <iostream>
#include "Node.h"

using namespace std;


void appendHead (nodePtr& head, int val){
    nodePtr tmp;
    tmp = new Node(val,head);
    head = tmp;
}

int main(){
    nodePtr head,tmp;

    head = new Node(0,NULL);

    for(int i=1;i<5;i++){
        appendHead(head,i);
    }

    //display 
    tmp = head;

    while(tmp!=NULL){
        cout<<tmp->getData();
        tmp=tmp->getNext();
    }

    //delete all nodees

    tmp=head;
    while(tmp!=NULL){

      nodePtr delNode = tmp;
      tmp= tmp->getNext();

      delete delNode;

    }
}