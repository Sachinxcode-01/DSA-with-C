# 10 - Heaps & Priority Queues

A Binary Heap is a complete binary tree stored compactly in a contiguous array that satisfies the heap invariant property.

---

## ⚡ Complexity Cheatsheet

| Operation | Time Complexity |
|-----------|:---------------:|
| `get_min()` / `get_max()` | $O(1)$ |
| `insert()` | $O(\log n)$ |
| `extract_min()` / `extract_max()` | $O(\log n)$ |
| `heapify()` (Building heap from array) | $O(n)$ |
| Heap Sort | $O(n \log n)$ |
| Space Complexity | $O(1)$ auxiliary (in-place) |

---

## 📚 Array Representation of a Binary Heap

For 0-indexed array element at index $i$:
- **Parent**: `(i - 1) / 2`
- **Left Child**: `2 * i + 1`
- **Right Child**: `2 * i + 2`

---

## 📂 Recommended Programs to Implement

| Program | Concept Demonstrated |
|---------|----------------------|
| `max_heap.c` | Heapify, insert, extract max, print heap |
| `min_heap.c` | Min-heap implementation for Dijkstra / Prim algorithms |
| `priority_queue.c` | Priority queue ADT using binary heap |
| `heap_sort.c` | In-place sorting using max-heap |

---

## 🛠️ Compilation

```bash
gcc max_heap.c -o max_heap
./max_heap
```
