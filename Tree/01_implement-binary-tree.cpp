#include <iostream>
using namespace std;

// Implementing a Tree
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int main(int argc, char const *argv[])
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(3);

    return 0;
}
