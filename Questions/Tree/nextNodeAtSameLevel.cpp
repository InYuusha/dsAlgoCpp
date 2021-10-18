#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int val;
    Node* left,*right;

    Node(int v):val(v),left(nullptr),right(nullptr){}
};

Node* rightNode(Node*root,int v){

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        int size =q.size();

        while(size--){          //for every node at same level
            Node*curr = q.front();
            q.pop();

            if(curr->val==v){
                if(!size)       //if no next node
                    return nullptr;
                return q.front();
            }
            
            if(curr->left)
                q.push(curr->left);

            if(curr->right)
                q.push(curr->right);    
        }
    }
    return nullptr;
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

    auto node =rightNode(x,1);
    if(node){
        cout<<node->val;
    }
    else cout<<"Next node is null";

}
