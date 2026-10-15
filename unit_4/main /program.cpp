
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Recursive function to calculate height
int height(Node* root) {
    if (root == NULL)
        return 0;

    return 1 + max(height(root->left),
                   height(root->right));
}

int main() {
    // Constructing a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Displaying the height
    cout << "Height of Binary Tree: "
         << height(root) << endl;

    return 0;
}
