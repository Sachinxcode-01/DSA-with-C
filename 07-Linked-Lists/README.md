# 07 - Linked Lists

Linked Lists are linear data structures where elements are stored in non-contiguous memory locations, linked together via pointers.

---

## ⚡ Complexity Cheatsheet

| Operation | Array (Static) | Dynamic Array | Singly Linked List | Doubly Linked List |
|-----------|:--------------:|:-------------:|:------------------:|:------------------:|
| Access by Index | $O(1)$ | $O(1)$ | $O(n)$ | $O(n)$ |
| Insert at Head | $O(n)$ | $O(n)$ | $O(1)$ | $O(1)$ |
| Insert at Tail | $O(1)^*$ | $O(1)^*$ | $O(1)$ (with tail) / $O(n)$ | $O(1)$ (with tail) |
| Insert at Position | $O(n)$ | $O(n)$ | $O(n)$ | $O(n)$ |
| Delete Head | $O(n)$ | $O(n)$ | $O(1)$ | $O(1)$ |
| Delete Tail | $O(1)$ | $O(1)$ | $O(n)$ | $O(1)$ |

---

## 📚 Key Variants & Implementations

1. **Singly Linked List** (`singly_linked_list.c`):
   - Nodes contain data and a single `next` pointer.
2. **Doubly Linked List** (`doubly_linked_list.c`):
   - Nodes contain `prev`, `data`, and `next` pointers (bidirectional traversal).
3. **Circular Linked List** (`circular_linked_list.c`):
   - Last node points back to the head node.

---

## 🎯 Classic Interview Problems to Implement

- Reverse a Linked List (Iterative & Recursive)
- Detect Cycle (Floyd's Tortoise and Hare algorithm)
- Find Middle Node (Fast and slow pointer technique)
- Merge Two Sorted Linked Lists
- Remove N-th node from end

---

## 🛠️ Compilation

```bash
gcc singly_linked_list.c -o singly_linked_list
./singly_linked_list
```
