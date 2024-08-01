#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int dataue)
    {
        data = dataue;
        left = right = NULL;
    }
};

class Solution {
public:
    Node* deleteNode(Node* root, int key) {
        if(root==NULL)
            return NULL;
        
        if(root->data==key)
            return helper(root);
        
        Node* dummy = root;
        // Finding the key dataue
        while(root!=NULL){
            if(root->data>key){
                if(root->left!=NULL && root->left->data==key){
                    root->left = helper(root->left);
                }
                else{
                    root=root->left;
                }
            }
            else{
                if(root->right!=NULL && root->right->data==key){
                    root->right = helper(root->right);
                }
                else{
                    root=root->right;
                }
            }
        }

        return dummy;
    }

    private:
    Node* helper (Node* root){
        if(root->left==NULL)
            return root->right;
        else if(root->right==NULL)
            return root->left;
        
        Node* rightchild = root->right;
        Node* lastRight = findLastNode(root->left);
        lastRight->right = rightchild;
        return root->left;
    }

    private:
    Node* findLastNode(Node* root){
        if(root->right==NULL)
            return root;
        return findLastNode(root->right);
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