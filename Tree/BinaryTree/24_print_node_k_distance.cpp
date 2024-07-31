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

class Solution {
public:
    vector<int> distanceK(Node* root, Node* target, int k) {
        unordered_map<Node*, Node*> parent_track;
        markParents(root, parent_track);
        
        queue<Node*> q;
        q.push(target);
        
        unordered_map<Node*, bool> visited;
        visited[target] = true;
        
        int current_level = 0;
        
        while (!q.empty()) {
            int size = q.size();
            if (current_level == k) break;
            current_level++;
            for (int i = 0; i < size; i++) {
                Node* currentNode = q.front();
                q.pop();
                
                if (currentNode->left && !visited[currentNode->left]) {
                    q.push(currentNode->left);
                    visited[currentNode->left] = true;
                }
                if (currentNode->right && !visited[currentNode->right]) {
                    q.push(currentNode->right);
                    visited[currentNode->right] = true;
                }
                if (parent_track.find(currentNode) != parent_track.end() &&
                    !visited[parent_track[currentNode]]) {
                    q.push(parent_track[currentNode]);
                    visited[parent_track[currentNode]] = true;
                }
            }
        }
        
        vector<int> result;
        while (!q.empty()) {
            Node* currentNode = q.front();
            q.pop();
            result.push_back(currentNode->data);
        }
        
        return result;
    }

private:
    void markParents(Node* root, unordered_map<Node*, Node*>& parent_track) {
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* currentNode = q.front();
            q.pop();
            if (currentNode->left) {
                parent_track[currentNode->left] = currentNode;
                q.push(currentNode->left);
            }
            if (currentNode->right) {
                parent_track[currentNode->right] = currentNode;
                q.push(currentNode->right);
            }
        }
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
    // vector<int> result =obj.distance(root,root->left->left,2);
    // obj.PrintNode(result);
};