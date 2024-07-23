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
    int isSumProperty(Node *root)
    { 
      if((root==NULL)||(root->left==NULL && root->right==NULL))return 1;
      int sum=0;
      if(root->left!=NULL) sum +=root->left->data;
      if(root->right!=NULL)sum+=root->right->data;
      return (root->data==sum && isSumProperty(root->left) &&isSumProperty(root->right));
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
    int result = obj.isSumProperty(root);
    cout<<result<<endl;
};