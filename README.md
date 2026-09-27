<div align="center">

  <img src="assets/banner.png" alt="DSA with C Banner" width="100%" />

  # DSA with C 🚀
  
  **A structured, hands-on roadmap to mastering Data Structures and Algorithms from ground up using pure C.**

  [![Language](https://img.shields.io/badge/Language-C99%20%2F%20C11-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
  [![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-blue?style=for-the-badge&logo=linux&logoColor=white)](#)
  [![Status](https://img.shields.io/badge/Status-Active%20Learning-success?style=for-the-badge)](#)
  [![License](https://img.shields.io/badge/License-MIT-purple?style=for-the-badge)](LICENSE)

</div>

---

## 📌 Overview

Welcome to the **DSA with C** repository! This repository documents a comprehensive journey from C language fundamentals to advanced Data Structures, Algorithms, problem-solving techniques, and time/space complexity analysis.

Every concept is accompanied by clean, well-commented code implementations designed to build deep conceptual clarity—especially around manual memory management and pointers.

---

## 🧭 Learning Roadmap & Progress

| # | Topic Module | Description | Status |
|---|--------------|-------------|:------:|
| 01 | **[01-C-Basics](./01-C-Basics/)** | Syntax, Data Types, Variables, Arithmetic Operations, I/O | 🟡 In Progress |
| 02 | **Control Flow & Loops** | If-Else, Switch-Case, For/While/Do-While Loops | ⚪ Upcoming |
| 03 | **Functions & Scope** | Modular programming, Call by Value/Reference, Scope rules | ⚪ Upcoming |
| 04 | **Arrays & Strings** | 1D/2D Arrays, String manipulations, Memory layout | ⚪ Upcoming |
| 05 | **Pointers & Dynamic Memory** | Pointer arithmetic, `malloc`, `calloc`, `realloc`, `free` | ⚪ Upcoming |
| 06 | **Structures & Unions** | Custom data structures, Nested structs, Self-referential structs | ⚪ Upcoming |
| 07 | **Linked Lists** | Singly, Doubly, and Circular Linked Lists | ⚪ Upcoming |
| 08 | **Stacks & Queues** | Array & Linked list implementations, Applications | ⚪ Upcoming |
| 09 | **Trees & Binary Search Trees** | Traversals (Inorder, Preorder, Postorder, BFS), BST operations | ⚪ Upcoming |
| 10 | **Heaps & Priority Queues** | Min-Heap, Max-Heap, Heap Sort | ⚪ Upcoming |
| 11 | **Hashing & Hash Maps** | Collision handling, Chaining, Open Addressing | ⚪ Upcoming |
| 12 | **Graphs & Graph Algorithms** | BFS, DFS, Dijkstra, Prim, Kruskal | ⚪ Upcoming |
| 13 | **Searching & Sorting** | Binary Search, Quick Sort, Merge Sort, etc. | ⚪ Upcoming |
| 14 | **Dynamic Programming & Recursion** | Memoization, Tabulation, Classic DP problems | ⚪ Upcoming |

---

## 📂 Repository Structure

```plaintext
DSAwithC/
├── assets/
│   └── banner.png                  # Project banner (16:9)
├── 01-C-Basics/
│   ├── hello.c                     # Hello World & basic I/O
│   ├── variables.c                 # Variables, primitive data types & format specifiers
│   └── variable_calculation.c      # Arithmetic operations & calculations
├── .vscode/
│   ├── launch.json                 # Debugger configuration
│   └── tasks.json                  # GCC build tasks
├── .gitignore                      # Git ignore rules for build artifacts
└── README.md                       # Project documentation
```

---

## 💻 Code Highlights (`01-C-Basics`)

- [`hello.c`](./01-C-Basics/hello.c): Standard introduction to basic C structure and console output.
- [`variables.c`](./01-C-Basics/variables.c): Demonstrates integer, float, character, and string variables along with formatting specifiers (`%d`, `%f`, `%c`, `%s`).
- [`variable_calculation.c`](./01-C-Basics/variable_calculation.c): Covers basic arithmetic operations (sum, difference, product) and formatted outputs.

---

## ⚙️ Getting Started

### Prerequisites

You need a C compiler installed on your system:
- **Windows:** [MinGW-w64](https://www.mingw-w64.org/) or [MSYS2](https://www.msys2.org/)
- **Linux:** `sudo apt install build-essential`
- **macOS:** `xcode-select --install`

Verify your compiler:
```bash
gcc --version
```

### Compiling and Running Programs

Navigate to any topic folder and compile with `gcc`:

```bash
# Example: Running variable calculation
gcc 01-C-Basics/variable_calculation.c -o 01-C-Basics/variable_calculation
./01-C-Basics/variable_calculation
```

On Windows (Command Prompt / PowerShell):
```powershell
gcc 01-C-Basics/variable_calculation.c -o 01-C-Basics/variable_calculation.exe
.\01-C-Basics\variable_calculation.exe
```

---

## 🤝 Contributing

Contributions, issues, and feature suggestions are welcome!
If you find a bug or have an optimized solution for any DSA problem, feel free to open a Pull Request.

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).
