#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

void inorder_traverse(struct Node *node)
{
    // base case
    if (node == NULL)
        return;
    // recursive case
    inorder_traverse(node->left);
    cout << node->data << " ";
    inorder_traverse(node->right);
}
void preorder_traverse(struct Node *node)
{
    // base case
    if (node == NULL)
        return;
    // recursive case
    cout << node->data << " ";
    preorder_traverse(node->left);
    preorder_traverse(node->right);
}

void postorder_traverse(struct Node *node)
{
    // base case
    if (node == NULL)
        return;
    // recursive case
    postorder_traverse(node->left);
    postorder_traverse(node->right);
    cout << node->data << " ";
}



int main(int argc, char const *argv[])
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << "Inorder Traverse" << "-> ";
    inorder_traverse(root);
    cout << endl;
    cout << "PreoderTraverse" << "-> ";
    preorder_traverse(root);
    cout << endl;
    cout << "PostoderTraverse" << "-> ";
    postorder_traverse(root);
    return 0;
}