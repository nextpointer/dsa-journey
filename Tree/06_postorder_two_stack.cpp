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

// Class to handle tree traversal methods
class Traverse
{
public:
    // Function to perform preorder traversal of a binary tree
    vector<int> PostOrderTraverse(Node *root)
    {
        vector<int> postorder;
        if (root == NULL)
            return postorder;

        stack<Node *> st1, st2;
        st1.push(root);
        while (!st1.empty())
        {
            root = st1.top();
            st1.pop();
            st2.push(root);
            if (root->left != NULL)
            {
                st1.push(root->left);
            }
            if (root->right != NULL)
            {
                st1.push(root->right);
            }
        }

        while (!st2.empty())
        {
            postorder.push_back(st2.top()->data);
            st2.pop();
        }

        return postorder;
    }

    // Function to print the elements of a vector
    void print_ans(const vector<int> &arr)
    {
        for (const int &val : arr)
        {
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
    vector<int> ans = object.PostOrderTraverse(root);
    // Print the preorder traversal result
    object.print_ans(ans);

    return 0;
}
