# 01 - C Basics

This module covers the core building blocks of the C programming language required before diving into advanced memory manipulation and data structures.

---

## 📚 Topics Covered

1. **Standard I/O & Program Structure** (`hello.c`)
   - `#include <stdio.h>` header
   - `main()` function entry point, exit status codes (`return 0`)
   - `printf()` syntax and newline characters (`\n`)

2. **Data Types & Specifiers** (`data_types.c`, `variables.c`)
   - Primitive types: `int`, `float`, `double`, `char`
   - Memory footprint sizes using `sizeof()`
   - Format specifiers: `%d`, `%f`, `%lf`, `%c`, `%s`

3. **Operators & Expressions** (`arithmetic_operators.c`, `relational_operators.c`, `logical_operators.c`, `variable_calculation.c`)
   - Arithmetic: `+`, `-`, `*`, `/`, `%`
   - Relational: `>`, `<`, `>=`, `<=`, `==`, `!=`
   - Logical: `&&`, `||`, `!` and short-circuit evaluation rules
   - Integer division vs floating point division

---

## 🛠️ Compilation & Execution

```bash
# Compile any file (e.g., logical_operators.c)
gcc logical_operators.c -o logical_operators

# Run on Linux/macOS
./logical_operators

# Run on Windows PowerShell
.\logical_operators.exe
```
