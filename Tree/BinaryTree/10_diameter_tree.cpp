// Implement post order using 2 stack

#include <bits/stdc++.h>
using namespace std;

// Definition of the structure for a tree node
struct Node
{
    int data;    // Data stored in the node
    Node *left;  // Pointer to the left child
    Node *right; // Pointer to the right child

    // Constructor to initialize the node with a value
    Node(int value)
    {
        data = value;
        left = right = NULL; // Initialize left and right children to NULL
    }
};

class Solution {
public:
    int diameterOfBinaryTree(Node* root) {
        int maxii=0;
        height(root,maxii);
        return maxii;
    }
private:
    int height(Node* root,int &maxii){
        if(root==NULL) return 0;
        int lh =height(root->left,maxii);
        int rh = height(root->right,maxii);
        maxii = max(maxii,lh+rh);
        return 1+max(rh,lh);
    }
};

int main()
{
    // Create the root node of the binary tree
    Node *root = new Node(1);
    // Create the left and right children of the root
    root->left = new Node(2);
    root->right = new Node(3);
    // Create the children of the node 2
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    // Create the children of the node 3
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution object;
    int result = object.diameterOfBinaryTree(root);
    cout << result << endl;

    return 0;
}
