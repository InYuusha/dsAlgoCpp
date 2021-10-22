
/* Post Order Traversal*/

#include<iostream>
#include<stack>
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

void inOrder(Node*root){

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
 
    //postOrder(x);
    //preOrder(x);
    inOrder(x);
}