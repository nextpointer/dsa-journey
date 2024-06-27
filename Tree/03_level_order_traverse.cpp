#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

class Traverse {
public:
    vector<vector<int>> level_order_traverse(Node *root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<Node *> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                Node *node = q.front();
                q.pop();
                if (node->left != NULL)
                    q.push(node->left);
                if (node->right != NULL)
                    q.push(node->right);
                level.push_back(node->data);
            }
            ans.push_back(level);
        }
        return ans;
    }

    void print_ans(const vector<vector<int>> &arr) {
        for (const auto &level : arr) {
            for (int val : level) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Traverse object;
    vector<vector<int>> ans = object.level_order_traverse(root);
    object.print_ans(ans);

    return 0;
}
