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
    int countNodes(Node *root)
    {
        if (root == NULL)
            return 0;
        int lh = leftTreeHeight(root);
        int rh = rightTreeHeight(root);

        if (lh == rh)
            return (2 << lh) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }

private:
    int leftTreeHeight(Node *root)
    {
        int height = 0;
        while (root->left != NULL)
        {
            height++;
            root = root->left;
        }

        return height;
    }

private:
    int rightTreeHeight(Node *root)
    {
        int height = 0;
        while (root->right != NULL)
        {
            height++;
            root = root->right;
        }

        return height;
    }
};

;

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(5);
    root->right->right = new Node(4);

    Solution obj;
    int count = obj.countNodes(root);
    cout << count << endl;
};