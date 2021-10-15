#include<iostream>
using namespace std;

struct Node{

    int val;
    Node *left,*right;

    //constructor
    Node(int v):val(v),left(nullptr),right(nullptr){}
   
};

void deleteTree(Node *&root){ //to make the pointer point to smthing else
                                // and reflect the changes in caller(main)
    if(root==nullptr)
        return;

    deleteTree(root->left);    
    deleteTree(root->right);

    delete root;  

    root=nullptr;  
}
int main(){

    Node*x;
    x = new Node(1);
    x->left=new Node(2);
    x->right=new Node(3);

    x->left->left=new Node(4);
    x->left->right=new Node(5);

    x->right->left=new Node(6);
    x->right->right=new Node(7);

    deleteTree(x);
    
    if(x==nullptr)
        cout<<"Tree deleted successfully";
    return 0;    
}