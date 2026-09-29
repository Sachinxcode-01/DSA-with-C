# 04 - Arrays & Strings

Arrays provide contiguous memory allocation for homogeneous elements. Strings in C are null-terminated character arrays (`char[]` ending in `\0`).

---

## 📚 Key Concepts

- **1D Arrays**: Contiguous memory layout, 0-based indexing, cache locality
- **Passing Arrays to Functions**: Array decay into pointers (`int arr[]` == `int *arr`)
- **2D / Multi-dimensional Arrays**: Row-major order memory storage, matrix operations
- **Strings in C**:
  - Null-terminator `'\0'` significance
  - Standard `<string.h>` library: `strlen`, `strcpy`, `strncpy`, `strcat`, `strcmp`
  - Safe user input handling: Avoiding dangerous `gets()`, using `fgets()`

---

## 📂 Recommended Programs to Implement

| Program | Concept Demonstrated |
|---------|----------------------|
| `array_operations.c` | Insertion, deletion, traversal, linear search |
| `matrix_multiplication.c` | 2D array row-major traversal & matrix product |
| `string_basics.c` | String initialization, length, reversal without libraries |
| `string_palindrome.c` | Two-pointer technique for checking palindromes |

---

## 🛠️ Compilation

```bash
gcc array_operations.c -o array_operations
./array_operations
```
