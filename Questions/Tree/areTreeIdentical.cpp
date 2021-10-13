#include<iostream>
#include<stack>

using namespace std;

struct Node{
    int val;
    Node * left,*right;
    Node(int v):val(v),left(nullptr),right(nullptr){}
    Node():val(NULL),left(nullptr),right(nullptr){}
};

/*bool isIdentical(Node*x,Node*y){
    if(x==nullptr&&y==nullptr)
        return true;
    else{
        return (x&&y)&&(x->val==y->val)&&isIdentical(x->left,y->left)&&isIdentical(x->right,y->right);
    }    
    
} */

bool isIdentical(Node*x,Node*y){

    if(x==nullptr&&y==nullptr)
        return true;
    
    if(x==nullptr||y==nullptr)
        return false;
      
    stack<pair<Node*,Node*>>st;
    st.push({x,y});

    while(!st.empty()){

        Node*x = st.top().first;
        Node*y = st.top().second;

        cout<<"x val"<<x->val<<endl;
        cout<<"y val"<<y->val<<endl;

        st.pop();

        if(x->val!=y->val)
            return false;

        if(x->left&&y->left)
            st.push({x->left,y->left});

        else if(x->left||y->left)
                return false ;    

        if(x->right&&y->right)
            st.push({x->right,y->right});

        else if(x->right||y->right)
                return false;               

    }  
    return true;
        
}
int main(){
    Node*n1=new Node(1);
    n1->left=new Node(2);
    n1->right=new Node(3);

    n1->left->left=new Node(4);
    n1->left->right=new Node(5);

    n1->right->left=new Node(6);
    n1->right->right=new Node(7);

    Node*n2=new Node(1);
    n2->left=new Node(2);
    n2->right=new Node(3);

    n2->left->left=new Node(4);
    n2->left->right=new Node(5);

    n2->right->left=new Node(6);
    n2->right->right=new Node(7);

    bool res=isIdentical(n1,n2);
    cout<<res;
}