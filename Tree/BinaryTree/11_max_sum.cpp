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
    int maxPathSum(Node* root) {
        int max = INT_MIN;
        maxPathDown(root,max);
        return max;
    }
private:
    int maxPathDown(Node* root,int &maxi){
        if(root==NULL) return 0;
        int lh = max(0,maxPathDown(root->left,maxi));
        int rh = max(0,maxPathDown(root->right,maxi));
        maxi = max(maxi,root->data+lh+rh);
        return max(lh,rh)+root->data;

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
    int result = object.maxPathSum(root);
    cout << result << endl;

    return 0;
}
