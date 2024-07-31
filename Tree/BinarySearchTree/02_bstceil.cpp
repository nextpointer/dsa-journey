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

class Solution
{
    public:
    int findCeil(Node *root, int input)
    {
        if (root == NULL)
            return -1;
        int ceil = -1;
        while (root)
        {
            if (root->data == input)
            {
                ceil = root->data;
                return ceil;
            }
            if (input > root->data)
                root = root->right;
            else
            {
                ceil = root->data;
                root = root->left;
            }
        }
        return ceil;
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
    
    cout << obj.findCeil(root,8) << endl;

    return 0;
}