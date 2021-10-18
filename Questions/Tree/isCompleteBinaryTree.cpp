
#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int val;
    Node* left,*right;

    Node(int v):val(v),left(nullptr),right(nullptr){}
};

bool isComplete(Node*root){

    if(root==nullptr){
        return true;
    }
    queue<Node*> q;
    q.push(root);

    bool flag=false;

    while(!q.empty()){

        Node*curr = q.front();
        q.pop();

        if(curr->left){
            if(flag==true) //we have already seen a space(empty node) between nodes in that level
                return false;
            q.push(curr->left);    

        }else flag=true;
        

        if(curr->right){
            if(flag==true)
                return false;
            q.push(curr->right);    

        }else flag=true;
    }

    return true;

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

    //x->right->left=new Node(6);
    x->right->right=new Node(7);

    bool res = isComplete(x);

    if(res)
        cout<<"Complete Tree ";

    else cout<<"Incomplete Tree ";    
}