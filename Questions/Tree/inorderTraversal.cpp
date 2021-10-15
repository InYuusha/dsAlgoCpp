#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int val;
    Node* left,*right;

    Node(int v):val(v),left(nullptr),right(nullptr){}
};
// Recursive traversal

/*void inorderTraversal(Node *x){
    if(x==nullptr)
        return;

    inorderTraversal(x->left);
    cout<<x->val;
    inorderTraversal(x->right);    
}
*/

//iterative traversal
void inorderTraversal(Node*x){

    stack<Node*>st;
    Node*curr=x;

    while(!st.empty()||curr!=nullptr){

        if(curr!=nullptr){
            st.push(curr);
            curr=curr->left;
        }
        else{
            curr=st.top();
            st.pop();
            cout<<curr->val;
            curr=curr->right;
        }
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

    inorderTraversal(x);

}