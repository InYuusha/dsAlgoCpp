#include<iostream>
#include "Node.h"


    Node::Node():data(0),next(NULL){};

    Node::Node(int val,Node*link):data(val),next(link){};

    int Node::getData()const{ //accesor
        return data;
    }

    Node* Node::getNext()const{
        return next;
    }

    void Node::setData(int val){
        data=val;
    }
    void Node::setNext(Node*link){
        next=link;
    }
