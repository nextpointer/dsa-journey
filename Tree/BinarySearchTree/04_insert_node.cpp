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
    Node* insertIntoBST(Node* root, int data) {
        if (root == NULL) {
            return new Node(data);
        }

        Node* current = root;
        Node* prev  = nullptr;
        while(current!=nullptr){
            prev = current;
            if(current->data>data)
                current = current->left;
            else
                current = current->right;
        }

        if(prev->data>data)
            prev->left = new Node(data);
        else
            prev->right = new Node(data);
        
        return root;
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