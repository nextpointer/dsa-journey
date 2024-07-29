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
    vector<int> preorder(Node* root){
        vector<int> preorder;
        Node* current = root;
        while(current!=NULL){
            if(current->left==NULL){
                preorder.push_back(current->data);
                current= current->right;
            }
            else{
                Node* prev = current->left;
                while(prev->right && prev->right !=current){
                    prev= prev->right;
                }
                if(prev->right ==NULL){
                    prev->right = current;
                    preorder.push_back(current->data);
                    current = current->left;
                }
                else{
                    prev->right = NULL;
                    current  = current->right;
                }
            }
        }
        return preorder;
    }

    public:
        void Traverse(vector<int> &arr){
            for(auto it:arr){
                cout<<it<<" ";
            }
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
    vector<int> result = obj.preorder(root);
    obj.Traverse(result);

    


};
