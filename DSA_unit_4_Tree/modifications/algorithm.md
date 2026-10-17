## Algorithm: Binary Tree Height Calculation

1. Start the program.
2. Define a node structure containing data and pointers to the left and right child nodes.
3. Construct a binary tree by creating nodes and connecting them using left and right pointers.
4. Define a recursive function to calculate the height of the binary tree.
5. Check whether the root node is NULL. If it is NULL, return 0.
6. Calculate the height of the left subtree by calling the recursive function.
7. Calculate the height of the right subtree by calling the recursive function.
8. Find the maximum of the left and right subtree heights and add 1 to include the current node.
9. Return the calculated height.
10. Calculate the minimum depth by finding the shortest path from the root to a leaf node.
11. Count the number of nodes present at the deepest level of the tree.
12. Display the maximum height, minimum depth, and number of nodes at the deepest level.
13. Test the program using empty, single-node, balanced, and skewed binary trees.
14. Stop the program.
