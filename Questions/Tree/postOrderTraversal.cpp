#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int val;
    Node* left,*right;
    Node(int v):val(v),left(nullptr),right(nullptr){}
};

//recursive
/*void postOrderTraversal(Node*x){

    if(x==nullptr)
        return;

    postOrderTraversal(x->left);
    postOrderTraversal(x->right);

    cout<<x->val;

}
*/

//iterative
void postOrderTraversal(Node*x){

    stack<Node*>st;
    stack<int>v;

    st.push(x);

    while(!st.empty()){
        Node*curr=st.top();
        st.pop();

        v.push(curr->val);

        if(curr->left)
            st.push(curr->left);

        if(curr->right)
            st.push(curr->right);    

    }

    while(!v.empty()){
        cout<<v.top()<<" ";
        v.pop();
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

    postOrderTraversal(x);

}