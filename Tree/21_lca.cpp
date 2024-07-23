#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int dataue){
        data = dataue;
        left = right =NULL;
    }

};

class Solution {
public:
    Node* solve(Node* root , Node* p, Node* q){
        if(root == NULL) return NULL;
        if(root -> data == p->data || root -> data == q -> data) return root;

        Node* left  = solve(root->left,p,q);
        Node* right = solve(root->right,p,q);

        if(left != NULL && right!=NULL) return root;
        
        if(left == NULL) return right;
        return left;

    }
    Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        return solve(root,p,q);
    }
};




int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right  = new Node(2);
    root->left->left =new Node(4);
    root->left->right =new Node(5);
    root->right->left =new Node(5);
    root->right->right =new Node(4);

    Solution obj;
    


};
