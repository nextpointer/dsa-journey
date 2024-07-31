#include <bits/stdc++.h>
using namespace std;

// Definition of the structure for a tree node
struct Node
{
    int data;   // Data stored in the node
    Node *left; // Pointer to the left child
    Node *right; // Pointer to the right child

    // Constructor to initialize the node with a value
    Node(int value)
    {
        data = value;
        left = right = NULL; // Initialize left and right children to NULL
    }
};

// Class to handle tree traversal methods
class Traverse
{
public:
    // Function to perform preorder traversal of a binary tree
    vector<int> preOrderTraverse(Node *root)
    {
        // Vector to store the preorder traversal result
        vector<int> preorder;

        // If the root is NULL, return the empty vector
        if (root == NULL)
            return preorder;

        // Stack to help with the traversal
        stack<Node *> st;
        // Push the root node onto the stack
        st.push(root);

        // While there are nodes in the stack
        while (!st.empty())
        {
            // Get the node on top of the stack
            root = st.top();
            st.pop(); // Remove the node from the stack

            // Add the node's data to the result vector
            preorder.push_back(root->data);

            // Push the right child onto the stack if it exists
            if (root->right != NULL)
                st.push(root->right);
            // Push the left child onto the stack if it exists
            if (root->left != NULL)
                st.push(root->left);
        }

        // Return the preorder traversal result
        return preorder;
    }

    // Function to print the elements of a vector
    void print_ans(const vector<int> &arr) {
        for (const int &val : arr) {
            cout << val << " "; // Print each element followed by a space
        }
        cout << endl; // Print a newline at the end
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

    // Create an object of the Traverse class
    Traverse object;
    // Get the preorder traversal of the tree
    vector<int> ans = object.preOrderTraverse(root);
    // Print the preorder traversal result
    object.print_ans(ans);

    return 0;
}
