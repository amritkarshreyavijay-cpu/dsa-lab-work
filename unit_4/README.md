# Binary Tree Height Calculation
## Problem Statement
Write a recursive C++ program to calculate the height of a binary tree and display the result for the constructed tree.

## Approach
The program constructs a binary tree in which each node contains data and pointers to its left and right children. A recursive function calculates the height by finding the heights of the left and right subtrees and adding one to the greater height. If the tree is empty, the function returns zero. Finally, the program displays the height of the constructed tree.
    
## Complexity Analysis

The Binary Tree Height Calculation program uses a recursive function to determine the height of a constructed binary tree.

**1. Time Complexity: O(n)**
The recursive function visits each node of the binary tree once to calculate the heights of its left and right subtrees. Therefore, the time complexity is O(n), where *n* is the total number of nodes in the tree.

**2. Space Complexity: O(h)**

The recursive function requires memory for function calls. The space complexity is O(h), where *h* is the height of the binary tree.

- **Balanced Binary Tree:** O(log n), because the tree height is approximately logarithmic.
- **Skewed Binary Tree:** O(n), because the tree height may be equal to the number of nodes.
- **Empty Binary Tree:** O(1), because the function returns immediately.

**Conclusion:** The program calculates the height of a binary tree in O(n) time, while its auxiliary space requirement depends on the height and structure of the tree.
