# 09 - Trees & Binary Search Trees

Trees are non-linear, hierarchical data structures consisting of nodes connected by edges, without any cycles.

---

## ⚡ Complexity Cheatsheet (BST)

| Operation | Average Case | Worst Case (Degenerate / Skewed) | Balanced (AVL / Red-Black) |
|-----------|:------------:|:--------------------------------:|:--------------------------:|
| Search | $O(\log n)$ | $O(n)$ | $O(\log n)$ |
| Insert | $O(\log n)$ | $O(n)$ | $O(\log n)$ |
| Delete | $O(\log n)$ | $O(n)$ | $O(\log n)$ |
| Space Complexity | $O(n)$ | $O(n)$ | $O(n)$ |

---

## 📚 Key Concepts & Traversals

1. **Tree Traversals**:
   - **Depth-First Search (DFS)**:
     - *Inorder* (Left, Root, Right) -> Yields sorted order in BST
     - *Preorder* (Root, Left, Right) -> Useful for tree serialization / cloning
     - *Postorder* (Left, Right, Root) -> Useful for deleting nodes / bottom-up calculations
   - **Breadth-First Search (BFS)**:
     - *Level Order Traversal* (using a Queue)
2. **Binary Search Tree (BST)** Properties:
   - For every node: all keys in left subtree are smaller; all keys in right subtree are larger.
   - Finding Minimum, Maximum, Inorder Successor, Inorder Predecessor.
   - Deletion cases: leaf node, 1 child node, 2 children nodes.
3. **Self-Balancing Trees**:
   - AVL Tree rotations (LL, RR, LR, RL)

---

## 📂 Recommended Programs to Implement

| Program | Concept Demonstrated |
|---------|----------------------|
| `binary_tree_traversals.c` | Recursive Inorder, Preorder, Postorder, and BFS |
| `bst_operations.c` | BST Insert, Search, Min/Max, and 3-case Deletion |
| `tree_height_diameter.c` | Computing height, size, and diameter recursively |
| `avl_tree.c` | Self-balancing tree with rotation helpers |

---

## 🛠️ Compilation

```bash
gcc bst_operations.c -o bst_operations
./bst_operations
```
