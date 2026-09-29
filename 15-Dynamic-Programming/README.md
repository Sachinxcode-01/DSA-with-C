# 15 - Dynamic Programming

Dynamic Programming (DP) solves complex problems by breaking them down into simpler overlapping subproblems and storing intermediate results to avoid redundant calculations.

---

## 📚 Key Paradigms

1. **Top-Down (Memoization)**: Recursive approach caching results in a memo table/array.
2. **Bottom-Up (Tabulation)**: Iterative approach filling up a DP table starting from base states.
3. **Space Optimization**: Reducing $O(n)$ or $O(n^2)$ space to $O(1)$ when only previous states are needed.

---

## 📂 Suggested Classic Problems to Build

- `fibonacci_dp.c`: Comparing recursive vs memoization vs tabulation vs space-optimized
- `climbing_stairs.c`: 1D DP counting ways
- `coin_change.c`: Unbounded knapsack / minimum coins
- `knapsack_01.c`: 0/1 Knapsack problem with 2D and 1D rolling array
- `longest_common_subsequence.c`: LCS string alignment
- `longest_increasing_subsequence.c`: LIS with DP ($O(n^2)$) and Binary Search ($O(n \log n)$)
