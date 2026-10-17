# Algorithm: Binary Tree Height Calculation

1. Start.
2. Define a node structure containing data and pointers to the left and right child nodes.
3. Construct a binary tree by creating nodes and connecting them.
4. Call the recursive function `height(root)` to calculate the height of the tree.
5. Check whether the root node is `NULL`.
6. If the root is `NULL`, return 0.
7. Otherwise, calculate the height of the left subtree recursively.
8. Calculate the height of the right subtree recursively.
9. Find the maximum height of the left and right subtrees and add 1 to include the current node.
10. Return the calculated height.
11. Display the height of the binary tree.
12. Stop.
