#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    char data;
    Node* left;
    Node* right;
    Node* next;

    Node(char ch) : data(ch), left(NULL), right(NULL), next(NULL) {}
};

class Stack {
    Node* head;

public:
    Stack() : head(NULL) {}

    void push_node(Node* newNode) {
        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    Node* pop_node() {
        if (head == NULL) return NULL;
        Node* temp = head;
        head = head->next;
        return temp;
    }
};

class EXP_tree {
public:
    void inorder_traversal(Node* head) {
        if (head == NULL) return;

        inorder_traversal(head->left);
        cout << head->data << " ";
        inorder_traversal(head->right);
    }

    void print_tree(Node* root, string indent = "", bool last = true) {
        if (root != NULL) {
            cout << indent;
            if (last) {
                cout << "R----";
                indent += "   ";
            } else {
                cout << "L----";
                indent += "|  ";
            }
            cout << root->data << endl;
            print_tree(root->left, indent, false);
            print_tree(root->right, indent, true);
        }
    }
};

// Function to return precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

// Function to convert infix expression to postfix expression
string infix_to_postfix(string exp) {
    stack<char> st;
    string postfix = "";
    for (char& ch : exp) {
        if (isalnum(ch)) {
            postfix += ch;
        } else if (ch == '(') {
            st.push(ch);
        } else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); // Remove '(' from stack
        } else {
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

// Function to build an expression tree from postfix expression
Node* build_expression_tree_from_postfix(string postfix) {
    Stack st;
    for (char& ch : postfix) {
        if (isalnum(ch)) {
            st.push_node(new Node(ch));
        } else {
            Node* root = new Node(ch);
            root->right = st.pop_node();
            root->left = st.pop_node();
            st.push_node(root);
        }
    }
    return st.pop_node();
}

// Function to build an expression tree from prefix expression
Node* build_expression_tree_from_prefix(string prefix) {
    Stack st;
    reverse(prefix.begin(), prefix.end());
    for (char& ch : prefix) {
        if (isalnum(ch)) {
            st.push_node(new Node(ch));
        } else {
            Node* root = new Node(ch);
            root->left = st.pop_node();
            root->right = st.pop_node();
            st.push_node(root);
        }
    }
    return st.pop_node();
}

int main() {
    string infix_exp = "(A+B)*(C-D)";
    string postfix_exp = infix_to_postfix(infix_exp);

    cout << "Infix Expression: " << infix_exp << endl;
    cout << "Postfix Expression: " << postfix_exp << endl;

    Node* root_postfix = build_expression_tree_from_postfix(postfix_exp);

    EXP_tree et;
    cout << "Inorder Traversal of the Expression Tree from Postfix: ";
    et.inorder_traversal(root_postfix);
    cout << "\nTree structure from Postfix:\n";
    et.print_tree(root_postfix);

    string prefix_exp = "*+AB-CD";
    Node* root_prefix = build_expression_tree_from_prefix(prefix_exp);

    cout << "Prefix Expression: " << prefix_exp << endl;
    cout << "Inorder Traversal of the Expression Tree from Prefix: ";
    et.inorder_traversal(root_prefix);
    cout << "\nTree structure from Prefix:\n";
    et.print_tree(root_prefix);

    return 0;
}
