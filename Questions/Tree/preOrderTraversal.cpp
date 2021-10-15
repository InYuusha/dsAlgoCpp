#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int val;
    Node* left,*right;
    Node(int v):val(v),left(nullptr),right(nullptr){}
};

//recursive 

/*void preOrderTraversal(Node*x){
    if(x==nullptr)
        return;

    cout<<x->val;
    preOrderTraversal(x->left);    
    preOrderTraversal(x->right);    
}
*/

//iterative 

void preOrderTraversal(Node*x){

    if(x==nullptr)
        return;

    stack<Node*>st;
    st.push(x);

    while(!st.empty()){
        Node*curr=st.top();
        st.pop();
        cout<<curr->val;

        if(curr->right)
            st.push(curr->right);

        if(curr->left)
            st.push(curr->left);    
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

    preOrderTraversal(x);

}