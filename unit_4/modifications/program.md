
## Program for Calculating Depth and No. of Nodes at Deepest Level of a Tree
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Node {
    string name;
    Node* left;
    Node* right;

    Node(string n) {
        name = n;
        left = NULL;
        right = NULL;
    }
};

// Calculate maximum height
int height(Node* root) {
    if (root == NULL)
        return 0;

    return 1 + max(height(root->left),
                   height(root->right));
}

// Calculate minimum depth from root to a leaf
int minDepth(Node* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    if (root->left == NULL)
        return 1 + minDepth(root->right);

    if (root->right == NULL)
        return 1 + minDepth(root->left);

    return 1 + min(minDepth(root->left),
                   minDepth(root->right));
}

// Count nodes at the deepest level
int countAtLevel(Node* root, int level) {
    if (root == NULL)
        return 0;

    if (level == 1)
        return 1;

    return countAtLevel(root->left, level - 1)
         + countAtLevel(root->right, level - 1);
}

int deepestNodeCount(Node* root) {
    return countAtLevel(root, height(root));
}

// Display results
void analyzeTree(Node* root, string testName) {
    cout << "\nTest: " << testName << endl;
    cout << "Height: " << height(root) << endl;
    cout << "Minimum depth: " << minDepth(root) << endl;
    cout << "Nodes at deepest level: "
         << deepestNodeCount(root) << endl;
}

int main() {
    // 1. Empty tree
    Node* empty = NULL;
    analyzeTree(empty, "Empty Tree");

    // 2. Single-node tree
    Node* single = new Node("CEO");
    analyzeTree(single, "Single-Node Tree");

    // 3. Balanced tree
    Node* balanced = new Node("CEO");
    balanced->left = new Node("Manager 1");
    balanced->right = new Node("Manager 2");
    balanced->left->left = new Node("Employee 1");
    balanced->left->right = new Node("Employee 2");
    balanced->right->left = new Node("Employee 3");
    balanced->right->right = new Node("Employee 4");

    analyzeTree(balanced, "Balanced Tree");

    // 4. Skewed tree
    Node* skewed = new Node("CEO");
    skewed->left = new Node("Manager");
    skewed->left->left = new Node("Team Leader");
    skewed->left->left->left = new Node("Employee");

    analyzeTree(skewed, "Skewed Tree");

    return 0;
}
