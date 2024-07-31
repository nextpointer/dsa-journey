#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right =NULL;
    }

};

class Solution {
  public:
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
            
        vector<int> level;
        findPaths(root,level,ans);
        return ans;
    }
    
    private:
    void findPaths(Node* root,vector<int> &level,vector<vector<int>> &ans){
        if(root==NULL)
            return;
        level.push_back(root->data);
        if(root->left==NULL && root->right==NULL )
            ans.push_back(level);
            
        findPaths(root->left,level,ans);
        findPaths(root->right,level,ans);
        
        level.pop_back();
        
    }
};



int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right  = new Node(2);
    root->left->left =new Node(4);
    root->left->right =new Node(5);
    root->right->left =new Node(5);
    root->right->right =new Node(4);

    Solution obj;
    vector<vector<int>> ans = obj.Paths(root);

    for(auto it: ans){
        for(auto it2:it){
            cout<<it2<<" ";
        }
        cout<<endl;
    }


};
