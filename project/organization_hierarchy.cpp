
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    string name;
    Node* left;
    Node* right;
};

Node* createNode(string name) {
    Node* newNode = new Node;
    newNode->name = name;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int height(Node* root) {
    if (root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max(leftHeight, rightHeight);
}

void display(Node* root, int level = 0) {
    if (root == NULL)
        return;

    for (int i = 0; i < level; i++)
        cout << "    ";

    cout << root->name << endl;

    display(root->left, level + 1);
    display(root->right, level + 1);
}

int main() {
    Node* root = createNode("CEO");

    root->left = createNode("Manager 1");
    root->right = createNode("Manager 2");

    root->left->left = createNode("Team Leader 1");
    root->left->right = createNode("Team Leader 2");

    root->left->left->left = createNode("Employee 1");

    cout << "Organization Hierarchy:" << endl;
    display(root);

    cout << "\nHeight of Organization Hierarchy: "
         << height(root) << " levels" << endl;

    return 0;
}
