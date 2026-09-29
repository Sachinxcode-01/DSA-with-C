# 12 - Graphs & Graph Algorithms

Graphs are non-linear data structures consisting of vertices (nodes) and edges.

---

## ⚡ Complexity Cheatsheet

| Algorithm / Operation | Adjacency Matrix | Adjacency List |
| --- | :---: | :---: |
| Space Complexity | $O(V^2)$ | $O(V + E)$ |
| Add Edge | $O(1)$ | $O(1)$ |
| Check Edge $(u, v)$ | $O(1)$ | $O(\text{degree}(u))$ |
| Breadth-First Search (BFS) | $O(V^2)$ | $O(V + E)$ |
| Depth-First Search (DFS) | $O(V^2)$ | $O(V + E)$ |
| Dijkstra's (with Min-Heap) | - | $O((V + E) \log V)$ |
| Prim's MST (with Min-Heap) | - | $O((V + E) \log V)$ |
| Kruskal's MST (with Disjoint Set) | - | $O(E \log E)$ |

---

## 📂 Suggested Programs to Build

- `graph_adj_matrix.c`: Graph representation using 2D matrix
- `graph_adj_list.c`: Graph representation using dynamic linked list arrays
- `bfs.c`: Breadth-first traversal with queue
- `dfs.c`: Depth-first traversal with recursion
- `dijkstra.c`: Shortest path algorithm
- `kruskal_mst.c`: Minimum spanning tree with Disjoint Set Union (DSU)
