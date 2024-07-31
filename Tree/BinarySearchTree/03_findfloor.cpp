#include <bits/stdc++.h>
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

class Solution{

public:
    int floor(Node* root, int x) {
        if (root == NULL)
            return -1;
        int floor = -1;
        while (root)
        {
            if (root->data == x)
            {
                floor = root->data;
                return floor;
            }
            if (x > root->data){
                floor =root->data;
                root = root->right;
            }
            else
            {
                root = root->left;
            }
        }
        return floor;
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

    Solution obj;
    
    cout << obj.floor(root,8) << endl;

    return 0;
}