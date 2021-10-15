#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int val;
    Node* left,*right;

    Node(int val){

        this->val=val;
        this->left=this->right=nullptr;
    }
};

void levelOrderTraversal(Node*root){
    
    queue<Node*>q;
    Node*curr=root;
    q.push(root);

    while(q.size()){
        
        curr=q.front();
        q.pop();
        cout<<curr->val;

        if(curr->left)
            q.push(curr->left);

        if(curr->right)
            q.push(curr->right);    
    }
}
int main(){
                         //       |     
    Node*x;              //      (1)
                         //  (2)     (3)
    x = new Node(1);     //(4) (5) (6) (7)
    x->left=new Node(2);
    x->right=new Node(3);

    x->left->left=new Node(4);
    x->left->right=new Node(5);

    x->right->left=new Node(6);
    x->right->right=new Node(7);

    levelOrderTraversal(x);

}