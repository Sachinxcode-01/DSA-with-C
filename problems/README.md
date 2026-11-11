# Graded Practice Problems 🎯

A curated, two-tier collection of graded programming challenges designed to transition from fundamental C syntax into algorithmic problem-solving.

---

## 🗂️ Problem Tiers

| Tier | Directory | Focus Area | Problems Count |
| :--- | :--- | :--- | :---: |
| **Level-01** | [`Level-01/`](./Level-01/) | I/O, Formatting, Operators & Conditional Branching | 10 Problems |
| **Level-02** | [`Level-02/`](./Level-02/) | Iteration (For, While), Math, Factorials, Patterns & Functions | 13 Problems |

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

 1. [`11_even_numbers.c`](./Level-02/11_even_numbers.c) — Filtering even numbers in range 1 to 100.
 2. [`12_odd_numbers.c`](./Level-02/12_odd_numbers.c) — Stride iteration (`i += 2`) up to 50.
 3. [`13_multiplication_table.c`](./Level-02/13_multiplication_table.c) — Dynamic table output with format specifiers.
 4. [`14_factorial.c`](./Level-02/14_factorial.c) — 64-bit integer computation using `long long`.
 5. [`15_reverse_counting.c`](./Level-02/15_reverse_counting.c) — Countdown loop using decrement operators.
 6. [`16_while_counting.c`](./Level-02/16_while_counting.c) — Counter-controlled while loop lifecycle.
 7. [`17_input_until_zero.c`](./Level-02/17_input_until_zero.c) — Sentinel-controlled input loop (`num != 0`).
 8. [`18_square_pattern.c`](./Level-02/18_square_pattern.c) — 5x5 Square star matrix with nested loops.
 9. [`19_triangle_pattern.c`](./Level-02/19_triangle_pattern.c) — Dependent nested loops for right-angled triangles.
10. [`20_tables_pattern.c`](./Level-02/20_tables_pattern.c) — Nested loops generating multiplication tables 1 to 5.
11. [`22_continue_practice.c`](./Level-02/22_continue_practice.c) — Odd number filtering using `continue` on evens.
12. [`23_welcome_function.c`](./Level-02/23_welcome_function.c) — Reusable greet function prototype & definition.
13. [`24_function_parameters_practice.c`](./Level-02/24_function_parameters_practice.c) — Function with integer parameters.

---

## 🛠️ How to Compile and Run

```bash
# Example: Running problem 14 (Factorial)
gcc -Wall -Wextra -std=c11 Level-02/14_factorial.c -o factorial
./factorial
```
