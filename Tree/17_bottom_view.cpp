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

class Solution{
    public:
    vector<int> bottomview(Node* root){
        vector<int> ans;
        if (root ==NULL) return ans;
        map<int,int>m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            Node* Node = temp.first;
            int line = temp.second;
             m[line] = Node->data;

            if(Node->left!= NULL){
                q.push({Node->left,line-1});
            } 
            if(Node->right!=NULL){
                q.push({Node->right,line+1});
            }
        }
        

        for(auto it:m){
            ans.push_back(it.second);
        }
    
        return ans;

    }

    void printList(vector<int> &arr){
        for(auto it:arr){
            cout<<it<<" ";
        }
    }
};


int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right  = new Node(3);
    root->left->left =new Node(4);
    root->left->right =new Node(5);
    root->right->left =new Node(6);
    root->right->right =new Node(7);

    Solution obj;
    vector<int> resultView  = obj.bottomview(root);
    obj.printList(resultView);


};
