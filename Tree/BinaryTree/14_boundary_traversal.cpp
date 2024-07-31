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

class BoundaryTraverse
{
private:
    bool isLeaf(Node *Node)
    {
        return (!Node->left && !Node->right);
    }
    void addLeftBoundary(Node *root, vector<int> &res)
    {
        Node *current = root->left;
        while (current)
        {
            if (!isLeaf(current))
            {
                res.push_back(current->data);
            }
            if (current->left)
                current = current->left;
            else
                current = current->right;
        }
    }
    void addLeaves(Node *root, vector<int> &res)
    {
        if (isLeaf(root))
        {
            res.push_back(root->data);
            return;
        }

        if (root->left)
            addLeaves(root->left, res);
        if (root->right)
            addLeaves(root->right, res);
    }
    void addRightBoundary(Node *root, vector<int> &res)
    {
        Node *current = root->right;
        vector<int> temp;
        while (current)
        {
            if (!isLeaf(current))
            {
                temp.push_back(current->data);
            }
            if (current->right)
                current = current->right;
            else
                current = current->left;
        }

        for (int i = temp.size() - 1; i >= 0; i--)
        {
            res.push_back(temp[i]);
        }
    }

public:
    vector<int> printBoundary(Node *root)
    {
        vector<int> res;
        if (!root)
            return res;
        if (!isLeaf(root))
        {
            res.push_back(root->data);
        }
        addLeftBoundary(root, res);
        addLeaves(root, res);
        addRightBoundary(root, res);
        return res;
    }

    void printTree(vector<int> list)
    {
        for (int i = 0; i < list.size(); i++)
        {
            cout << list[i] << " ";
        }
    }
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    BoundaryTraverse object;
    vector<int> result = object.printBoundary(root);
    object.printTree(result);

    return 0;
}
