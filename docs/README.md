# Developer Reference & Cheatsheets

Quick references, debugging tips, and memory management guidelines for C and DSA.

---

## 🧭 Contents

1. **Big-O Cheatsheet**:
   - $O(1) < O(\log n) < O(n) < O(n \log n) < O(n^2) < O(2^n) < O(n!)$
2. **C Memory Anatomy**:
   - **Text / Code Segment**: Machine instructions (read-only)
   - **Data & BSS Segments**: Initialized & uninitialized global/static variables
   - **Heap Segment**: Dynamically allocated memory (`malloc`, `calloc`, `realloc`, `free`), grows upward
   - **Stack Segment**: Function stack frames, local variables, parameters, return addresses, grows downward
3. **Debugging Segmentation Faults**:
   - Check if pointer is `NULL` before dereferencing (`if (ptr == NULL) ...`)
   - Check array boundary indices (`0 <= i < size`)
   - Free memory when done and set pointer to `NULL` (`free(ptr); ptr = NULL;`)
   - Compile with debugging symbols: `gcc -g program.c -o program`
   - Use GDB: `gdb ./program` -> `run` -> `backtrace`
