#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* left, *right;
    Node():val(NULL),left(nullptr),right(nullptr){}
    Node(int x):val(x),left(nullptr),right(nullptr){}
};

int height(Node*root){

    if(root==nullptr){
        return 0;
    }
    else return 1 + max(height(root->left),height(root->right));

}
int main(){
    Node*x;
    x= new Node(1);
    x->left=new Node(2);
    x->right=new Node(3);

    x->left->left=new Node(4);
    x->left->right=new Node(5);

    x->right->left=new Node(5);
    x->right->right=new Node(5);

    cout<<height(x);

}