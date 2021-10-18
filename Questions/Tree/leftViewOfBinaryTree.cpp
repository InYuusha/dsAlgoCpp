#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int val;
    Node* left,*right;
    Node(int v):val(v),left(nullptr),right(nullptr){}
};

void leftView(Node* root){
    
    queue<Node*>q;
    Node*curr=nullptr;
    q.push(root);


    while(!q.empty()){
        int i=0;
        int size=q.size();

        while(i++<size){ //for every node at same level

            Node*x=q.front();
            q.pop();

            if(i==1){
                cout<<x->val;
            }
            if(x->left){
                q.push(x->left);
            }
            if(x->right)
                q.push(x->right);
        }
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
 
    leftView(root);
 
    return 0;
}