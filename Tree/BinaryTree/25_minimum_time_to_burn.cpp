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
    int minTime(Node* root, int target) {
        map<Node*, Node*> mpp;
        Node* targetAddress = bfsMapParent(root, mpp, target);
        int maxi = findMaxiDistance(mpp, targetAddress);
        return maxi;
    }

private:
    Node* bfsMapParent(Node* root, map<Node*, Node*>& mpp, int start) {
        queue<Node*> q;
        q.push(root);
        Node* res = nullptr;
        while (!q.empty()) {
            Node* CurrentNode = q.front();
            q.pop();
            if (CurrentNode->data == start) {
                res = CurrentNode;
            }
            if (CurrentNode->left) {
                mpp[CurrentNode->left] = CurrentNode;
                q.push(CurrentNode->left);
            }
            if (CurrentNode->right) {
                mpp[CurrentNode->right] = CurrentNode;
                q.push(CurrentNode->right);
            }
        }
        return res;
    }

    int findMaxiDistance(map<Node*, Node*>& mpp, Node* target) {
        queue<Node*> q;
        q.push(target);
        map<Node*, bool> visited;
        visited[target] = true;
        int maxi = 0;  // Initialize maxi to 0
        while (!q.empty()) {
            int size = q.size();
            bool flag = false;
            for (int i = 0; i < size; i++) {
                auto node = q.front();
                q.pop();
                if (node->left && !visited[node->left]) {
                    flag = true;
                    visited[node->left] = true;
                    q.push(node->left);
                }
                if (node->right && !visited[node->right]) {
                    flag = true;
                    visited[node->right] = true;
                    q.push(node->right);
                }
                if (mpp[node] && !visited[mpp[node]]) {
                    flag = true;
                    visited[mpp[node]] = true;
                    q.push(mpp[node]);
                }
            }
            if (flag)
                maxi++;
        }
        return maxi;
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
    int time = obj.minTime(root, 4);
    cout << time << endl;
};