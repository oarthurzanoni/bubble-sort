# Bubble Sort in C

A simple implementation of the **Bubble Sort** algorithm in C, featuring an early-exit optimization to avoid unnecessary comparisons when the array is already sorted.

## Overview

Bubble Sort is a comparison-based sorting algorithm that repeatedly compares adjacent elements and swaps them when they are in the wrong order.

After each pass, the largest remaining element reaches its correct position.

### Optimization

This implementation uses a boolean flag (`swapped`) to track whether any elements were exchanged during a pass.

If no swaps occur, the algorithm terminates early because the array is already sorted.

## Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best | `O(n)` |
| Average | `O(n²)` |
| Worst | `O(n²)` |
| Auxiliary space | `O(1)` |

The early-exit optimization improves the best-case time complexity from quadratic to linear.

## Implementation

```c
void bubble_sort(int numbers[], size_t length) {
    for (size_t i = length; i > 1; i--) {
        bool swapped = false;

        for (size_t j = 0; j < i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;

                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}
```

## Getting Started

Make sure you have a C compiler installed, such as Clang or GCC.

**Compile:**

```bash
clang -std=c17 -Wall -Wextra -Wpedantic -Wconversion -g \
  -o bubble-sort bubble-sort.c
```

**Run:**

```bash
./bubble-sort
```

### Example Output

```text
=== Sorted Numbers ===
 1.   -9
 2.   -5
 3.   11
 4.   18
 5.   21
 6.   28
 7.   29
 8.   34
 9.   45
10.   79
```

## Concepts Covered

- Arrays and nested loops
- Functions and modular programming
- Comparison and swapping
- `size_t` and `bool`
- Time and space complexity
- Early-exit optimization

---

Built as a practical exercise in **Algorithms and C Programming**.
