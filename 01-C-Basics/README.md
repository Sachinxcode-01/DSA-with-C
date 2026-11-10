# 01 - C Programming Basics 🚀

This module establishes the core building blocks of the C programming language required before diving into pointers, manual memory manipulation, and complex Data Structures and Algorithms.

---

## 📚 Topics & Concepts Covered

### 1. Program Structure & Standard I/O
- `#include <stdio.h>` header and preprocessor directives
- `main()` entrypoint structure and exit codes (`return 0;`)
- Standard formatted output via `printf()` and escape sequences (`\n`, `\t`)
- **Key File:** [`hello.c`](./hello.c)

### 2. Primitive Data Types, Memory & Specifiers
- Primitive scalar types: `int`, `float`, `double`, `char`
- Measuring type memory footprint with `sizeof()`
- Standard format specifiers: `%d` (signed int), `%f` (float), `%lf` (double), `%c` (character), `%s` (string)
- **Key Files:** [`data_types.c`](./data_types.c), [`variables.c`](./variables.c)

### 3. Operators & Arithmetic Expressions
- **Arithmetic Operators:** `+`, `-`, `*`, `/`, `%` (modulo)
- **Compound Assignment:** `+=`, `-=`, `*=`, `/=`, `%=`
- **Unary Increment / Decrement:** Nuances between pre-increment (`++i`) and post-increment (`i++`)
- **Relational / Comparison:** `>`, `<`, `>=`, `<=`, `==`, `!=` (evaluating to `1` for True, `0` for False)
- **Logical Operators:** `&&` (AND), `||` (OR), `!` (NOT) and short-circuit evaluation behavior
- **Key Files:** 
  - [`variable_calculation.c`](./variable_calculation.c)
  - [`arithmetic_operators.c`](./arithmetic_operators.c)
  - [`assignment_operators.c`](./assignment_operators.c)
  - [`increment_decrement.c`](./increment_decrement.c)
  - [`relational_operators.c`](./relational_operators.c)
  - [`logical_operators.c`](./logical_operators.c)

### 4. Decision Making & Conditional Branching
- **Simple If Statement:** Executing code based on a single condition
- **If-Else:** Two-way mutually exclusive branching
- **Else-If Ladder:** Multi-tier range and condition evaluation
- **Nested If Statements:** Hierarchical validation checks (e.g., eligibility criteria)
- **Switch-Case:** Multi-branch dispatching on integer and character values with `break` and `default`
- **Key Files:**
  - [`if_statement.c`](./if_statement.c)
  - [`if_else.c`](./if_else.c)
  - [`else_if.c`](./else_if.c)
  - [`nested_if.c`](./nested_if.c)
  - [`switch_statement.c`](./switch_statement.c)

### 5. Loops, Iteration & Jump Statements
- **For Loop:** Counter-controlled iteration with initialization, condition, and update in a single header
- **While Loop:** Entry-controlled (pre-test) loop executing while condition holds True
- **Do-While Loop:** Exit-controlled (post-test) loop guaranteed to execute at least once
- **Nested Loops:** Multi-dimensional iterations for grids, coordinate matrices, and star patterns
- **Jump Statements:** Exiting loops prematurely via `break;`
- **Key Files:**
  - [`for_loop.c`](./for_loop.c)
  - [`while_loop.c`](./while_loop.c)
  - [`do_while_loop.c`](./do_while_loop.c)
  - [`nested_loops.c`](./nested_loops.c)
  - [`break_statement.c`](./break_statement.c)

---

## 🗂️ Module File Index

| File | Topic | Description |
| :--- | :--- | :--- |
| [`hello.c`](./hello.c) | Standard Output | Introduction to C syntax and terminal output |
| [`data_types.c`](./data_types.c) | Data Types | Demonstrates basic data types and memory sizes |
| [`variables.c`](./variables.c) | Variables | Demonstrates variables and format specifiers |
| [`variable_calculation.c`](./variable_calculation.c) | Arithmetic Expressions | Basic calculations with variables |
| [`arithmetic_operators.c`](./arithmetic_operators.c) | Arithmetic Operators | Operators: `+`, `-`, `*`, `/`, `%` |
| [`assignment_operators.c`](./assignment_operators.c) | Assignment Operators | Compound assignment operators (`+=`, `-=`, etc.) |
| [`increment_decrement.c`](./increment_decrement.c) | Unary Operators | Pre/Post increment (`++i`, `i++`) and decrement |
| [`relational_operators.c`](./relational_operators.c) | Comparison | Relational evaluations producing boolean results |
| [`logical_operators.c`](./logical_operators.c) | Boolean Logic | `&&`, `||`, and `!` operator demonstrations |
| [`if_statement.c`](./if_statement.c) | Conditionals | Single if condition branching |
| [`if_else.c`](./if_else.c) | Conditionals | Two-way decision branching |
| [`else_if.c`](./else_if.c) | Conditionals | Else-if ladder structure |
| [`nested_if.c`](./nested_if.c) | Conditionals | Nested conditions for multi-level validation |
| [`switch_statement.c`](./switch_statement.c) | Decision Dispatch | Multi-branch menu selection using switch-case |
| [`for_loop.c`](./for_loop.c) | Loops | Counter-driven iteration from 1 to 5 |
| [`while_loop.c`](./while_loop.c) | Loops | Pre-tested condition iteration |
| [`do_while_loop.c`](./do_while_loop.c) | Loops | Post-tested condition iteration |
| [`nested_loops.c`](./nested_loops.c) | Patterns | 3x3 square matrix iteration using nested loops |
| [`break_statement.c`](./break_statement.c) | Control Jump | Premature loop termination using `break` |

---

## 🛠️ Compilation & Execution

Compile any source file using GCC with standard error checking enabled:

```bash
# Recommended command:
gcc -Wall -Wextra -std=c11 <filename>.c -o <output_name>

# Example (Linux/macOS):
gcc -Wall -Wextra -std=c11 break_statement.c -o break_statement
./break_statement

# Example (Windows PowerShell):
gcc -Wall -Wextra -std=c11 break_statement.c -o break_statement.exe
.\break_statement.exe
```
