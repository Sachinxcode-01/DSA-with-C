# 05 - Pointers & Dynamic Memory Management

Pointers are variables that store the memory address of another variable. They form the backbone of dynamic data structures (Linked Lists, Trees, Graphs) in C.

---

## 📚 Key Concepts

- **Pointer Syntax**: Address-of operator (`&`), Dereference operator (`*`)
- **Pointer Arithmetic**: Increments scale by `sizeof(type)`
- **Dynamic Memory Allocation** (`<stdlib.h>`):
  - `malloc(size)`: Allocates uninitialized memory on heap
  - `calloc(n, size)`: Allocates zero-initialized memory on heap
  - `realloc(ptr, new_size)`: Resizes previously allocated block
  - `free(ptr)`: Releases heap memory back to system
- **Common Pitfalls**:
  - Dangling pointers (referencing freed memory)
  - Memory leaks (failing to call `free()`)
  - Double free errors
  - Segmentation faults (dereferencing `NULL` or uninitialized pointers)
- **Double Pointers (`**ptr`)**: Pointers to pointers (essential for modifying head pointers in linked lists)
- **Function Pointers**: Passing functions as arguments (used in comparator functions like `qsort`)

---

## 📂 Recommended Programs to Implement

| Program | Concept Demonstrated |
|---------|----------------------|
| `pointers_basics.c` | Address-of, dereference, pointer types |
| `pointer_arithmetic.c` | Stepping through arrays using pointer increments |
| `dynamic_array.c` | Resizable dynamic array using `malloc`, `realloc`, and `free` |
| `double_pointers.c` | Modifying pointers inside functions |
| `function_pointers.c` | Callback functions, custom sorting comparators |

---

## 🛠️ Compilation

```bash
gcc pointers_basics.c -o pointers_basics
./pointers_basics
```
