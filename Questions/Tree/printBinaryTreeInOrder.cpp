//Print all nodes of a perfect binary tree in a specific order


#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;

struct Node{

    int val;

    Node* left,*right;
    Node(int v):val(v),left(nullptr),right(nullptr){}
};

//(1, 2, 3, 4, 7, 5, 6, 8, 15, 9, 14, 10, 13, 11, 12)
/*void printOrder(Node*root){

    queue<Node*>q1,q2;
    cout<<root->val;

    if(root->left&&root->right){
        q1.push(root->left);
        q2.push(root->right);
    }
    

    while(!q1.empty()){

        int n=q1.size();
        while(n--){

            Node*x = q1.front();
            cout<<x->val;
            q1.pop();

            if(x->left){
                q1.push(x->left);
            }
            if(x->right){
                q1.push(x->right);
            }

            Node*y = q2.front();
            cout<<y->val;
            q2.pop();

            if(y->right){
                q2.push(y->right);
            }
            if(y->left){
                q2.push(y->left);
            }
        }
    }

}
*/

void printReverseOrder(Node*root){

    int level = 1;

    map<int,vector<int>> mp;

    mp[level].push_back(root->val);

    queue<Node*> q1,q2;

    if(root->left&&root->right){
        q1.push(root->left);
        q2.push(root->right);
    }

    while(!q1.empty()){

        int n=q1.size();

        while(n--){ //for same level

            Node*x = q1.front();
            q1.pop();
            mp[++level].push_back(x->val);

            if(x->right)
                q1.push(x->right);

            if(x->left)
                q1.push(x->left);    

            Node*y= q2.front();
            q2.pop();
            mp[level].push_back(y->val);

            if(y->left)
                q2.push(y->left); 

            if(y->right)
                q2.push(y->right);
                            
        }
    }

    for(int i=mp.size();i>=1;i--){
        for(int j:mp[i])
            cout<<j<<" ";
    }
}

int main(){

   Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);

    printReverseOrder(root);

}