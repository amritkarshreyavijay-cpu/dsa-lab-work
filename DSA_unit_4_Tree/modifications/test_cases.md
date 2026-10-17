## Test Cases – Binary Tree Height Calculation

The program is tested using four different types of binary trees to check the working of recursive functions used to calculate the maximum height, minimum depth, and number of nodes at the deepest level.

### 1. Empty Binary Tree

An empty binary tree does not contain any nodes. This test case checks whether the program can handle an empty tree correctly. When the root is NULL, the recursive function returns zero.

**Example:**
A tree is created without inserting any node. The root pointer is set to NULL.

### 2. Single-Node Binary Tree

A single-node binary tree contains only the root node, without any left or right child. This test case checks whether the program correctly calculates the height and minimum depth when only one node is present.

**Example:**
A tree contains only one node with the value 10, which acts as the root node.

### 3. Balanced Binary Tree

A balanced binary tree has left and right subtrees with approximately equal heights. This test case checks whether the program correctly calculates the height, minimum depth, and number of nodes at the deepest level when nodes are distributed across different branches.

**Example:**

```text
        1
       / \
      2   3
     / \ / \
    4  5 6  7
```

In this tree, both subtrees have the same height, and four nodes are present at the deepest level.

### 4. Skewed Binary Tree

A skewed binary tree is a tree in which each node has only one child, forming a chain-like structure. This test case checks the recursive functions when the height of the tree is equal to the number of nodes.

**Example:**

   ```text
       1
      /
     2
    /
   3
  /
 4
```

In this tree, every node has only one child, forming a single path from the root to the leaf node.

### Result

These four test cases help verify the correctness of the Binary Tree Height Calculation program for different tree structures. They demonstrate how recursion can be used to calculate the maximum height, minimum depth, and number of nodes at the deepest level.
