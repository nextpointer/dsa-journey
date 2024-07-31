#include <iostream>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to check if two trees are identical
bool areIdentical(Node* root1, Node* root2) {
    // If both trees are empty, they are identical
    if (root1 == NULL && root2 == NULL) {
        return true;
    }

    // If one tree is empty and the other is not, they are not identical
    if (root1 == NULL || root2 == NULL) {
        return false;
    }

    // Check if the data of both nodes is the same and recursively check for left and right subtrees
    return (root1->data == root2->data &&
            areIdentical(root1->left, root2->left) &&
            areIdentical(root1->right, root2->right));
}

// Helper function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node(val);
    return temp;
}

int main() {
    // Create first tree
    Node* root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->left->right = newNode(5);

    // Create second tree
    Node* root2 = newNode(1);
    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);

    // Check if the two trees are identical
    if (areIdentical(root1, root2)) {
        cout << "The two trees are identical." << endl;
    } else {
        cout << "The two trees are not identical." << endl;
    }

    return 0;
}
