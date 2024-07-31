#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

class Searching{
    public:
    Node* BSTsearch(Node* root,int value){
        while (root!=NULL && root->data!=value)
        {
            root = root->data>value?root->left:root->right;
        }

        return root;
        
    }
};


int main(int argc, char const *argv[])
{
    Node* root = new Node(7);
    root->left = new Node(5);
    root->right = new Node(8);
    root->left->left = new Node(2);
    root->left->right = new Node(6);
    root->right->left = new Node(4);
    root->right->right = new Node(9);

    Searching obj;
    Node* node  = obj.BSTsearch(root,7);
    cout<<node->data<<endl;

    return 0;
}
