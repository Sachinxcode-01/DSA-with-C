# 06 - Structures & Unions

Structures (`struct`) group different data types into a single user-defined composite type. Self-referential structures are the prerequisite for building linked lists, trees, and graphs.

---

## 📚 Key Concepts

- **Defining & Initializing Structs**: Dot operator (`.`) for direct access
- **Pointers to Structs**: Arrow operator (`->`) for dereference and member access
- **`typedef` with Structs**: Simplifying syntax and clean abstractions
- **Self-referential Structs**:
  ```c
  typedef struct Node {
      int data;
      struct Node *next;
  } Node;
  ```
- **Memory Padding & Alignment**: How compilers align structure members in memory
- **Unions vs Structs**: Shared memory space for union members

---

## 📂 Recommended Programs to Implement

| Program | Concept Demonstrated |
|---------|----------------------|
| `struct_basics.c` | Declaring, initializing, and passing structs to functions |
| `struct_pointers.c` | Heap-allocated structs, arrow operator (`->`) |
| `self_referential_struct.c` | Creating node links in memory |
| `union_demo.c` | Memory footprint difference between structs and unions |

---

## 🛠️ Compilation

```bash
gcc struct_pointers.c -o struct_pointers
./struct_pointers
```
