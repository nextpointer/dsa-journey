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
    vector<int> InOrderTraverse(Node *root)
    {
        stack<Node*> st;
        Node* node = root;
        vector<int> inorder;
        if (root == NULL)
            return inorder;
        while (1)
        {
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else{
                if(st.empty()==true) break;
                node = st.top();
                st.pop();
                inorder.push_back(node->data);
                node = node->right;
            }
           
        }
        return inorder;
        
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
    vector<int> ans = object.InOrderTraverse(root);
    // Print the preorder traversal result
    object.print_ans(ans);

    return 0;
}
