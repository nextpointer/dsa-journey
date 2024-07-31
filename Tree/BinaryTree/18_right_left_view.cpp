#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right =NULL;
    }

};

class Solution {
public:
    vector<int> rightSideView(Node* root) {
        vector<int> res;
        recursion(root,0,res);
        return res;
    }

    void recursion(Node* root,int level,vector<int>&res){
        if(root==NULL)
            return;
        if(res.size() == level){
            res.push_back(root->data);
        }

        recursion(root->right,level+1,res);
        recursion(root->left,level+1,res);
        
        // if it is left side view then
        // recursion(root->left,level+1,res);
        // recursion(root->right,level+1,res);
    }
};


int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right  = new Node(3);
    root->left->left =new Node(4);
    root->left->right =new Node(5);
    root->right->left =new Node(6);
    root->right->right =new Node(7);

    Solution obj;
    vector<int> resultView  = obj.rightSideView(root);
    // obj.printList(resultView);


};
