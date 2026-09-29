# 03 - Functions & Scope

Functions enable modular, reusable, and testable code. In C, understanding how arguments are passed on the call stack is critical for mastering recursion and data structures.

---

## 📚 Key Concepts

- **Function Declarations (Prototypes) vs Definitions**: Preventing implicit declaration errors
- **Parameter Passing**:
  - *Call by Value*: Copies value onto the stack frame
  - *Call by Reference (via Pointers)*: Modifies original variable in caller's scope
- **Variable Scope & Storage Classes**: `auto`, `static`, `extern`, `register`
- **Introduction to Recursion**: Base cases, call stack unwinding, stack overflow risks

---

## 📂 Recommended Programs to Implement

| Program | Concept Demonstrated |
|---------|----------------------|
| `function_basics.c` | Prototypes, return values, pure functions |
| `call_by_value_vs_reference.c` | Swapping variables, pointer parameters |
| `storage_classes.c` | Static persistent counters vs local variables |
| `recursion_intro.c` | Factorial, Fibonacci, visual stack trace |

---

## 🛠️ Compilation

```bash
gcc recursion_intro.c -o recursion_intro
./recursion_intro
```
