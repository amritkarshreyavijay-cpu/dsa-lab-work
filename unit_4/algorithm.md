# Algorithm: Binary Tree Analyzer

1. Start.
2. Construct the binary tree.
3. Calculate the height recursively:
   - If the root is NULL, return 0.
   - Otherwise, return 1 plus the maximum height of the left and right subtrees.
4. Calculate the minimum depth recursively:
   - If the root is NULL, return 0.
   - If the node is a leaf, return 1.
   - If one child is NULL, follow the other child.
   - Otherwise, return 1 plus the minimum depth of both subtrees.
5. Count the nodes at the deepest level by using the calculated height.
6. Display the height, minimum depth, and deepest-level node count.
7. Repeat the calculations for empty, single-node, balanced, and skewed trees.
8. Stop.
