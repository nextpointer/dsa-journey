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
    bool func(Node* root){
        return root==NULL || isSymmetric(root->left,root->right);
    }

    bool isSymmetric(Node* left, Node* right){
        if(left==NULL || right==NULL)
            return left==right;
        
        // check the value
        if(left->data!=right->data)
            return false;
        
        return isSymmetric(left->left,right->right)&& isSymmetric(left->right,right->left);
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
    bool result  = obj.func(root);
    // obj.printList(resultView);
    cout<<result<<endl;


};
