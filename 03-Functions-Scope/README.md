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
| [`function_intro.c`](./function_intro.c) | Function prototype, caller structure, definition |
| [`function_parameters.c`](./function_parameters.c) | Passing arguments and receiving parameters by value |
| [`function_return.c`](./function_return.c) | Returning values and capturing output in callers |
| [`type1_no_parameters_no_return.c`](./type1_no_parameters_no_return.c) | Function Type 1: Void return, void parameters |
| [`type2_parameters_no_return.c`](./type2_parameters_no_return.c) | Function Type 2: Void return with parameters |
| [`type3_no_parameters_return.c`](./type3_no_parameters_return.c) | Function Type 3: Value return with no parameters |
| [`type4_parameters_return.c`](./type4_parameters_return.c) | Function Type 4: Value return with parameters |
| [`27_function_types_practice.c`](./27_function_types_practice.c) | Comprehensive practice of function types |
| [`local_scope.c`](./local_scope.c) | Local variable declaration & block-level lifetime |
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
