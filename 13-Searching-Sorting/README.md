# 13 - Searching & Sorting Algorithms

Searching and sorting are foundational algorithmic operations applied across all data structures.

---

## ⚡ Complexity Cheatsheet

| Algorithm | Best Time | Average Time | Worst Time | Space | Stable? |
| --- | :---: | :---: | :---: | :---: | :---: |
| Linear Search | $O(1)$ | $O(n)$ | $O(n)$ | $O(1)$ | - |
| Binary Search | $O(1)$ | $O(\log n)$ | $O(\log n)$ | $O(1)$ | - |
| Bubble Sort | $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | Yes |
| Selection Sort | $O(n^2)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | No |
| Insertion Sort | $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | Yes |
| Merge Sort | $O(n \log n)$ | $O(n \log n)$ | $O(n \log n)$ | $O(n)$ | Yes |
| Quick Sort | $O(n \log n)$ | $O(n \log n)$ | $O(n^2)$ | $O(\log n)$ | No |
| Counting Sort | $O(n + k)$ | $O(n + k)$ | $O(n + k)$ | $O(k)$ | Yes |

---

## 📂 Suggested Programs to Build

- `linear_binary_search.c`: Iterative & recursive binary search
- `bubble_selection_insertion.c`: Elementary $O(n^2)$ sorting
- `merge_sort.c`: Divide-and-conquer $O(n \log n)$ sorting
- `quick_sort.c`: Lomuto & Hoare partition schemes
- `counting_sort.c`: Non-comparison based sorting
