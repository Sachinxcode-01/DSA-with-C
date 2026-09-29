# 11 - Hashing & Hash Tables

A Hash Table is an associative data structure that maps keys to values using a mathematical hash function, providing expected $O(1)$ lookup, insertion, and deletion.

---

## ⚡ Complexity Cheatsheet

| Operation | Average Case | Worst Case (All Collisions) |
| --- | :---: | :---: |
| Search | $O(1)$ | $O(n)$ |
| Insert | $O(1)$ | $O(n)$ |
| Delete | $O(1)$ | $O(n)$ |
| Space | $O(n)$ | $O(n)$ |

---

## 📚 Key Concepts

- **Hash Functions**: Division method, Multiplication method, MurmurHash/djb2 string hash
- **Collision Resolution Strategies**:
  1. **Separate Chaining**: Each bucket holds a linked list of entries
  2. **Open Addressing**: All items stored directly in array table
     - *Linear Probing*: `(h(k) + i) % m`
     - *Quadratic Probing*: `(h(k) + c1*i + c2*i^2) % m`
     - *Double Hashing*: `(h1(k) + i * h2(k)) % m`
- **Load Factor ($\alpha = n / m$) & Dynamic Rehashing**

---

## 📂 Recommended Programs to Implement

| Program | Concept Demonstrated |
| --- | --- |
| `hash_functions.c` | Numeric and string hashing (djb2, polynomial rolling) |
| `hash_table_chaining.c` | Hash table using linked lists for collision handling |
| `hash_table_linear_probing.c` | Open addressing with linear probing and tombstone deletion |

---

## 🛠️ Compilation

```bash
gcc hash_table_chaining.c -o hash_table_chaining
./hash_table_chaining
```
