
/* Post Order Traversal*/

#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left,*right;

    Node(int v):val(v),left(nullptr),right(nullptr){}
};

/*void postOrder(Node*root){

    if(root==nullptr)
        return;

    stack<Node*>st;    
    stack<int>li;
    st.push(root);

    while(!st.empty()){

        Node*curr=st.top();
        st.pop();
        li.push(curr->val);

        if(curr->left){
            st.push(curr->left);
        }

        if(curr->right){
            st.push(curr->right);
        }
    }
    while(!li.empty()){

        cout<<li.top();
        li.pop();

    }    
} */

/*void preOrder(Node*root){

    if(root==nullptr)
        return;

    stack<Node*>st;
    st.push(root);

    while(!st.empty()){

        Node*curr=st.top();
        st.pop();

        cout<<curr->val;

        if(curr->right)  
            st.push(curr->right);

        if(curr->left)
            st.push(curr->left);      
    }    
} */

/*void inOrder(Node*root){

    stack<Node*>st;
    Node*curr=root;    

    while(!st.empty()||curr!=nullptr){
        
        if(curr!=nullptr){
            st.push(curr);
            curr=curr->left;
        }
        else{
            curr=st.top();
            st.pop();
            cout<<curr->val<<" ";
            curr=curr->right;
        }        

    }
}
*/

void bottomView(Node*root,int dist,int level,auto&mp){
    if(root==nullptr)
        return;
    if(mp.find(dist)==mp.end()||level>=mp[dist].second){
        mp[dist]={root->val,level};
    }    

    bottomView(root->left,dist-1,level+1,mp);
    bottomView(root->right,dist+1,level+1,mp);
}
void printBottom(Node*root){

    unordered_map <int,pair<int,int>> mp;
    bottomView(root,0,1,mp);

    for(auto it:mp){
        cout<<it.second.first;
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
    printBottom(root);
}