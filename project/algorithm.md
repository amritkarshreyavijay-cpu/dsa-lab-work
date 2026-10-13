# Algorithm: Organization Hierarchy Height Calculator

1. Start.
2. Create a binary tree representing the organization hierarchy.
3. Assign the root node as the top-level position, such as CEO.
4. Call the recursive `height()` function with the root node.
5. Check whether the current node is NULL.
6. If the node is NULL, return 0.
7. Recursively calculate the height of the left subtree.
8. Recursively calculate the height of the right subtree.
9. Return 1 plus the maximum of the left and right subtree heights.
10. Display the calculated hierarchy height in levels.
11. Stop.
