#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* left,*right;

    Node(int v):val(v),left(nullptr),right(nullptr){}
};

struct NodeInfo{

    Node* node;
    Node*parent;
    int level;
};

void getNodes(Node*root,Node* parent,int level,NodeInfo&x,NodeInfo&y){

    if(root==nullptr)
        return;

    getNodes(root->left,root,level+1,x,y);    
    getNodes(root->right,root,level+1,x,y);

    if(root==x.node){
        x={x.node,parent,level};
    }  

    if(root==y.node){
        y={y.node,parent,level};
    }  
}

bool areCousins(Node*root,Node*a,Node*b){

    NodeInfo x = {a,nullptr,0};
    NodeInfo y = {b,nullptr,0};

    getNodes(root,nullptr,0,x,y);

    return (x.level==y.level)&&(x.parent!=y.parent);

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
 
    bool res=areCousins(x,x->left->right,x->left->left);

    if(res)
        cout<<"Nodes are Cousins ";
    else cout<<"Nodes are not Cousins";    
 
    return 0;
}