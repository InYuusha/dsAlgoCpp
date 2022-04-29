#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left,*right;

    Node(int val):val(val),left(nullptr),right(nullptr){}
};

void reverseLevelOrderTraversal(Node*root){
    
    queue<Node*>q;
    stack<Node*>st;
    Node*curr=root;
    q.push(root);

    while(q.size()){
        curr=q.front();
        q.pop();
        st.push(curr);

        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);    

    }
    while(st.size()){
        Node*curr=st.top();
        st.pop();
        cout<<curr->val;
    }
}

int main()
{
      Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    //postOrder(x);
    //preOrder(x);
    //inOrder(x)
    //levelOrderTraversal(x);
    reverseLevelOrderTraversal(root);
}