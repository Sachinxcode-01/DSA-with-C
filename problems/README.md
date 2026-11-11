# Graded Practice Problems 🎯

A curated, two-tier collection of graded programming challenges designed to transition from fundamental C syntax into algorithmic problem-solving.

---

## 🗂️ Problem Tiers

| Tier | Directory | Focus Area | Problems Count |
| :--- | :--- | :--- | :---: |
| **Level-01** | [`Level-01/`](./Level-01/) | I/O, Formatting, Operators & Conditional Branching | 10 Problems |
| **Level-02** | [`Level-02/`](./Level-02/) | Iteration (For, While), Math, Factorials & 2D Patterns | 11 Problems |

---

## 📋 Problems List

### 🟢 [Level-01: Foundations & Control Flow](./Level-01/)
1. [`01_personal_info.c`](./Level-01/01_personal_info.c) — Formatting multiple data types (`%s`, `%d`, `%.1f`, `%c`).
2. [`02_basic_calculator.c`](./Level-01/02_basic_calculator.c) — Arithmetic operations with safe zero-division handling.
3. [`03_rectangle_area.c`](./Level-01/03_rectangle_area.c) — User input handling and formula computation.
4. [`04_even_odd.c`](./Level-01/04_even_odd.c) — Parity testing using the modulus operator (`% 2`).
5. [`05_positive_negative_zero.c`](./Level-01/05_positive_negative_zero.c) — Multi-way sign classification.
6. [`06_largest_two.c`](./Level-01/06_largest_two.c) — Relational comparison of two numbers.
7. [`07_grade_calculator.c`](./Level-01/07_grade_calculator.c) — Grade tiered validation logic.
8. [`08_switch_calculator.c`](./Level-01/08_switch_calculator.c) — Menu-driven arithmetic dispatcher using switch-case.
9. [`09_print_numbers.c`](./Level-01/09_print_numbers.c) — Sequential range generation (1 to 10).
10. [`10_sum_natural_numbers.c`](./Level-01/10_sum_natural_numbers.c) — Series accumulator loop.

### 🔵 [Level-02: Loops, Math & 2D Patterns](./Level-02/)
11. [`11_even_numbers.c`](./Level-02/11_even_numbers.c) — Filtering even numbers in range 1 to 100.
12. [`12_odd_numbers.c`](./Level-02/12_odd_numbers.c) — Stride iteration (`i += 2`) up to 50.
13. [`13_multiplication_table.c`](./Level-02/13_multiplication_table.c) — Dynamic table output with format specifiers.
14. [`14_factorial.c`](./Level-02/14_factorial.c) — 64-bit integer computation using `long long`.
15. [`15_reverse_counting.c`](./Level-02/15_reverse_counting.c) — Countdown loop using decrement operators.
16. [`16_while_counting.c`](./Level-02/16_while_counting.c) — Counter-controlled while loop lifecycle.
17. [`17_input_until_zero.c`](./Level-02/17_input_until_zero.c) — Sentinel-controlled input loop (`num != 0`).
18. [`18_square_pattern.c`](./Level-02/18_square_pattern.c) — 5x5 Square star matrix with nested loops.
19. [`19_triangle_pattern.c`](./Level-02/19_triangle_pattern.c) — Dependent nested loops for right-angled triangles.
20. [`20_tables_pattern.c`](./Level-02/20_tables_pattern.c) — Nested loops generating multiplication tables 1 to 5.
21. [`22_continue_practice.c`](./Level-02/22_continue_practice.c) — Odd number filtering using `continue` on evens.

---

## 🛠️ How to Compile and Run

```bash
# Example: Running problem 14 (Factorial)
gcc -Wall -Wextra -std=c11 Level-02/14_factorial.c -o factorial
./factorial
```
