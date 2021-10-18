
#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* left,*right;

    Node(int v):val(v),left(nullptr),right(nullptr){}
};

int transform(Node*root){

    if(root==nullptr)
        return 0;

    int left = transform(root->left);
    int right = transform(root->right);

    int old = root->val;
    root->val=left+right;

    return root->val+old;

}

void display(Node* root){

    if(root==nullptr)
        return;

    cout<<root->val<<" ";

    display(root->left);    
    display(root->right);    
}

int main()
{
     Node*x;              //      (1)
                         //  (2)     (3)
    x = new Node(1);     //(4) (5) (6) (7)
    x->left=new Node(2);
    x->right=new Node(3);

    x->left->left=new Node(4);
    x->left->right=new Node(5);

    x->right->left=new Node(6);
    x->right->right=new Node(7);
 
    transform(x);
    display(x);
 
    return 0;
}