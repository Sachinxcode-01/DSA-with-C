# 08 - Stacks & Queues

Stacks and Queues are abstract data types (ADTs) that constrain access patterns to Last-In-First-Out (LIFO) and First-In-First-Out (FIFO) respectively.

---

## ⚡ Complexity Cheatsheet

| ADT | Operation | Array Implementation | Linked List Implementation |
|-----|-----------|:--------------------:|:--------------------------:|
| **Stack** | `push()` | $O(1)$ amortized | $O(1)$ |
| | `pop()` | $O(1)$ | $O(1)$ |
| | `peek()` | $O(1)$ | $O(1)$ |
| **Queue** | `enqueue()` | $O(1)$ (circular array) | $O(1)$ (with tail pointer) |
| | `dequeue()` | $O(1)$ (circular array) | $O(1)$ |
| | `front()` | $O(1)$ | $O(1)$ |

---

## 📚 Key Implementations & Applications

1. **Stack**:
   - `stack_array.c`: Fixed-size / dynamically resizable array stack
   - `stack_linked_list.c`: Dynamic stack without capacity overflow
   - *Applications*: Balanced parentheses checker, Infix to Postfix conversion, Postfix evaluation, Call stack simulation
2. **Queue**:
   - `queue_circular_array.c`: Circular queue avoiding memory wastage
   - `queue_linked_list.c`: Linked list queue using `front` and `rear` pointers
   - `deque.c`: Double-ended queue (insert/delete at both ends)

---

## 🛠️ Compilation

```bash
gcc stack_array.c -o stack_array
./stack_array
```
