# Organization Hierarchy Height Calculator

## Problem Statement
Develop a recursive C++ program to calculate the height of a binary tree representing an organization's hierarchy and display the result.

## Introduction
An organization has a hierarchical structure consisting of different levels, such as CEO, managers, team leaders, and employees. This structure can be represented using a tree data structure.

In this project, a binary tree is used to represent a simplified organization hierarchy. Each node represents a position in the organization, and each node can have at most two child nodes. A recursive function calculates the height of the tree by finding the longest path from the root node to a leaf node.

## Objectives
- To understand the binary tree data structure.
- To implement recursion in C++.
- To calculate the height of an organizational hierarchy.
- To understand the practical application of trees in hierarchical systems.

## Practical Application
This project demonstrates how tree height can be used to determine the number of levels in a simplified organizational hierarchy. Similar concepts are useful in decision trees, hierarchical data management, and computer science applications.



## Concepts Used
- Binary Tree
- Recursion
- Structures and Pointers
- Dynamic Memory Allocation

## Expected Outcome
The program constructs an organizational hierarchy using a binary tree and displays the total number of levels by calculating its height recursively.

## Conclusion
The project demonstrates the use of recursion to calculate binary tree height. It also helps understand how hierarchical structures can be represented and analyzed using tree data structures.

## Enhanced Features

- **Height Calculation:** Finds the longest path from the root to a leaf.
- **Minimum Depth Calculation:** Finds the shortest path from the root to a leaf.
- **Deepest-Level Node Count:** Counts the nodes present at the deepest level.
- **Tree Validation:** Tests empty, single-node, balanced, and skewed trees.

## Test Scenarios

The program is tested using four different tree structures to verify the correctness of its recursive functions.

## Time Complexity

- Height calculation: O(n)
- Minimum depth calculation: O(n)
- Deepest-level node count: O(n)

Here, n represents the number of nodes in the tree.

## Conclusion

The enhanced program calculates the height and minimum depth of a binary tree and counts the nodes at its deepest level. Testing different tree structures helps verify the correctness of the recursive implementation.
