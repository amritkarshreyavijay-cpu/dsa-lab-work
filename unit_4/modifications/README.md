## Modifications
- Calculate the minimum depth of the tree.
- Count the number of nodes at the deepest level.
- Test empty, single-node, balanced, and skewed trees.
## Approach

In this project, a binary tree is created using nodes, where each node contains data and pointers to its left and right child nodes. A recursive function is used to calculate the height of the binary tree. First, the function checks whether the root node is NULL. If the tree is empty, it returns 0. Otherwise, it calculates the height of the left and right subtrees recursively, compares their heights, and adds 1 to the greater height to include the current node. The calculated height is then displayed as the output. The program is tested using different cases, such as an empty tree, a single-node tree, a balanced tree, and a skewed tree. As additional modifications, the program also calculates the minimum depth and counts the number of nodes at the deepest level.

## Complexity Analysis

### Modification 1: Minimum Depth Calculation

Minimum depth is the number of nodes along the shortest path from the root node to the nearest leaf node. A leaf node is a node that has no left or right child. In this modification, a recursive function checks the left and right subtrees to find the shortest path to a leaf node. If the tree is empty, the minimum depth is 0. This modification helps us understand the shortest path in a binary tree.

**Time Complexity:** O(n)

**Space Complexity:** O(h)

### Modification 2: Counting Nodes at the Deepest Level

In this modification, the program counts the number of nodes present at the deepest level of the binary tree. The deepest level is the level that contains the nodes farthest from the root. The program identifies the height of the tree and counts the nodes at that level. This helps us understand how nodes are distributed across different levels of the tree.

**Time Complexity:** O(n)

**Space Complexity:** O(h)

### Modification 3: Testing Different Tree Structures

The program is tested with different types of binary trees to check whether the recursive functions work correctly. These test cases include an empty tree, a single-node tree, a balanced tree, and a skewed tree. Each case represents a different tree structure and helps verify the correctness of the program.

**Time Complexity:** O(n) for calculating the tree properties, where n is the number of nodes.

**Space Complexity:** O(h), where h is the height of the tree.

---

##  Test Cases

### Test Case 1: Empty Binary Tree

In this case, the binary tree does not contain any nodes, and the root pointer is `NULL`. The height and minimum depth are both 0 because no nodes are present. The number of nodes at the deepest level is also 0. This test case checks whether the program handles an empty tree correctly.

### Test Case 2: Single-Node Binary Tree

In this case, the binary tree contains only one node, which is the root node. Since the root node is also a leaf node, the height and minimum depth are both 1. There is only one node at the deepest level. This test case checks the program's working when the tree contains only one node.

**Tree Structure:**
```text
    10
```

### Test Case 3: Balanced Binary Tree

A balanced binary tree has left and right subtrees of similar heights. In this test case, the tree contains seven nodes arranged over three levels. Both subtrees have the same height, and four nodes are present at the deepest level. The height and minimum depth are both 3 because all leaf nodes are at the same level.

**Tree Structure:**
```text
        1
       / \
      2   3
     / \ / \
    4  5 6  7
```

### Test Case 4: Skewed Binary Tree

A skewed binary tree is a tree in which each node has only one child. In this test case, the nodes form a single path from the root to the leaf. Since there are four nodes in the path, the height and minimum depth are both 4. Only one node is present at the deepest level. This test case checks the program's working when the tree is not balanced.

**Tree Structure:**
```text
    1
   /
  2
 /
3
/
4
```

---

## 3. Conclusion

The modifications improve the basic binary tree height calculation program by adding minimum depth calculation and counting nodes at the deepest level. Testing the program with empty, single-node, balanced, and skewed trees helps verify the correctness of the recursive functions. These modifications also improve understanding of binary tree structure, recursion, and tree traversal.
