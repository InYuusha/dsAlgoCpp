#include<iostream>
#include<map>
using namespace std;

struct Node{
    int val;
    Node* left,*right;
    Node(int v):val(v),left(nullptr),right(nullptr){}
};

void printTop(Node*root,int dist,int level, auto&mp){

    if(root==nullptr){
        return;
    }
    if(mp.find(dist)==mp.end()){
        mp[dist]={root->val,level};;
    }
    printTop(root->left,dist-1,level+1,mp);
    printTop(root->right,dist+1,level+1,mp);
}

void topView(Node*root){

    map<int,pair<int,int>>mp;

    printTop(root,0,0,mp);

    for(auto it:mp){
        cout<<it.second.first<<" ";
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
 
    topView(root);
 
    return 0;
}