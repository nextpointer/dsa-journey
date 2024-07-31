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
    int maxWidth(Node *root)
    {
        if (root == NULL)
            return 0;

        int ans = 0;
        queue<pair<Node *, unsigned long long>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            int size = q.size();
            unsigned long long mmin = q.front().second;
            unsigned long long first, last;

            for (int i = 0; i < size; i++)
            {
                unsigned long long cur_ID = q.front().second - mmin;
                Node *Node = q.front().first;
                q.pop();

                if (i == 0)
                    first = cur_ID;
                if (i == size - 1)
                    last = cur_ID;
                
                if(Node->left)
                    q.push({Node->left,cur_ID*2+1});
                
                if(Node->right)
                    q.push({Node->right,cur_ID*2+2});
            }
             ans = max(ans, static_cast<int>(last - first + 1));
        }
        return ans;
    }
};

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
    int result = obj.maxWidth(root);
    cout<<result<<endl;
};
