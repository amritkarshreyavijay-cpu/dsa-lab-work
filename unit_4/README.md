# Binary Tree Height Calculation
## Problem Statement
Write a recursive C++ program to calculate the height of a binary tree and display the result for the constructed tree.
## Modifications
- Also calculate the minimum depth of the tree.
- Count the number of nodes at the deepest level.
- Test empty, single-node, balanced, and skewed trees.
## Approach
The Binary Tree Height Calculator is implemented using a binary tree data structure in C++. Each node contains data and pointers to its left and right child nodes. The program uses recursion to perform the following operations:
1. **Calculate Maximum Height:** Find the longest path from the root node to a leaf node.
2. **Calculate Minimum Depth:** Find the shortest path from the root node to a leaf node.
3. **Count Nodes at the Deepest Level:** Determine the number of nodes present at the maximum depth of the tree.
    
The program is tested using four different cases: an empty tree, a single-node tree, a balanced binary tree, and a skewed binary tree. The results for each case are displayed to verify the correctness of the calculations.
This approach demonstrates the use of binary trees and recursive functions to analyze tree structures efficiently.
## Complexity Analysis
The Binary Tree Height Calculator uses recursion to calculate the maximum height, minimum depth, and number of nodes at the deepest level of a binary tree. The program is tested using empty, single-node, balanced, and skewed trees.
### 1. Time Complexity
- **Maximum Height:** O(n), as each node may be visited once.
- **Minimum Depth:** O(n), as each node may need to be visited to find the nearest leaf node.
- **Counting Nodes at the Deepest Level:** O(n), as the program traverses the tree to count nodes at the deepest level.
Therefore, the overall time complexity is **O(n)**, where *n* is the total number of nodes in the tree.
### 2. Space Complexity
The space complexity is **O(h)**, where *h* is the height of the tree, because recursive function calls require memory.
- **Balanced Tree:** O(log n), because its height is approximately logarithmic.
- **Skewed Tree:** O(n), because its height can be equal to the number of nodes.
- **Empty and Single-Node Trees:** O(1), because they require only a constant amount of recursion space.
### 3. Test Cases
**Test Case 1: Empty Tree**
- Maximum height: 0
- Minimum depth: 0
- Nodes at deepest level: 0
- Time complexity: O(1)
  
**Test Case 2: Single-Node Tree**
- Maximum height: 1
- Minimum depth: 1
- Nodes at deepest level: 1
- Time complexity: O(1)
  
**Test Case 3: Balanced Binary Tree**
- Maximum height: 3
- Minimum depth: 2
- Nodes at deepest level: 4
- Time complexity: O(n)
- Space complexity: O(log n)
  
**Test Case 4: Skewed Binary Tree**
- Maximum height: 4
- Minimum depth: 4
- Nodes at deepest level: 1
- Time complexity: O(n)
- Space complexity: O(n)
  
### Conclusion
The program efficiently calculates the maximum height, minimum depth, and number of nodes at the deepest level using recursion. Testing different tree structures helps verify the correctness of the program. The time complexity is O(n) for general non-empty trees, while the space complexity depends on the height and structure of the tree.

