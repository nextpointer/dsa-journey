#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int x):data(x),left(nullptr),right(nullptr){};
};

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> s;
        TreeNode* node=root;

        int i=1;
        long long int x=LLONG_MAX;

        while(s.size()>0 or node){
            if(node){
                s.push(node);
                node=node->left;
            }

            else{
                TreeNode* temp=s.top();
                s.pop();
                if(i==k) return temp->val;
                if(x!=LLONG_MAX){
                    x=temp->val;
                }
                i++;
                node=temp->right;
            }
            
        }
        return -1;
    }
};



int main(int argc, char const *argv[])
{
    Node *root = new Node(7);
    root->left = new Node(5);
    root->right = new Node(8);
    root->left->left = new Node(2);
    root->left->right = new Node(6);
    root->right->left = new Node(4);
    root->right->right = new Node(9);

    return 0;
}