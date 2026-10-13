# Test Cases: Binary Tree Analyzer

## Test Case 1: Empty Tree
**Input:** No nodes

Expected output:
- Height: 0
- Minimum depth: 0
- Nodes at deepest level: 0

## Test Case 2: Single-Node Tree
**Structure:** CEO

Expected output:
- Height: 1
- Minimum depth: 1
- Nodes at deepest level: 1

## Test Case 3: Balanced Tree

```text
          CEO
         /   \
   Manager1  Manager2
     / \       / \
    E1  E2    E3  E4
```

Expected output:
- Height: 3
- Minimum depth: 2
- Nodes at deepest level: 4

## Test Case 4: Skewed Tree

```text
CEO
 |
Manager
 |
Team Leader
 |
Employee
```

Expected output:
- Height: 4
- Minimum depth: 4
- Nodes at deepest level: 1

## Result
All four tree structures are tested to verify the recursive calculation of height, minimum depth, and the number of nodes at the deepest level.
