## DATE: 22/1/2026

# Arrays – Full Notes (Day 01 to Day 07)

---

# Day 01 – Introduction to Arrays

## What is an Array?

* An array is a fundamental data structure that stores elements in **contiguous memory locations**.
* Each element is accessed using an **index**, starting from `0`.
* Arrays provide **fast random access**, which makes them efficient for many problems.

### Example Representation

```
Index:  0   1   2   3
Array: 10  20  30  40
```

---

## Key Characteristics

* **Fixed Size**: Size is defined at creation time and cannot be changed.
* **Contiguous Memory**: Elements are stored next to each other in memory.
* **Index-Based Access**: Direct access using index.
* **Homogeneous**: Stores elements of the same data type.
* **Cache-Friendly**: Sequential access is faster due to CPU caching.

---

## Time Complexity Overview

* Access: `O(1)`
* Traversal: `O(N)`
* Insertion/Deletion: `O(N)` (due to shifting)

---

# Day 02 – Array Indexing & Traversal

## Array Indexing

* First element → index `0`
* Last element → index `n - 1`
* Accessing invalid index causes **undefined behavior** in C++.

### Example

```cpp
arr[0]   // first element
arr[n-1] // last element
```

---

## Traversing an Array

### Methods

* Using `for` loop
* Using `while` loop
* Using range-based `for` loop (C++)

### Notes

* Traversal always takes `O(N)` time.
* Index bounds must be respected.

---

# Day 03 – Finding Maximum and Second Maximum Element

## Problem Statement

Find the largest and second largest elements in a given array.

---

## Algorithm (Logic)

1. Initialize `max1` with the first element.
2. Initialize `max2` with a very small value.
3. Traverse the array.
4. Update `max1` and `max2` when a larger element is found.

---

## Complexity

* Time Complexity: `O(N)`
* Space Complexity: `O(1)`

---

# Day 04 – Reverse an Array

## Problem Statement

Reverse the elements of an array.

---

## Approach 1: Using Extra Array

* Copy elements from the end of the original array to a new array.
* Original array remains unchanged.

### Complexity

* Time: `O(N)`
* Space: `O(N)`

---

## Approach 2: In-Place Reversal (Two Pointer)

* Use two pointers (`start`, `end`).
* Swap elements and move pointers inward.

### Complexity

* Time: `O(N)`
* Space: `O(1)`

---

# Day 05 – Linear Search

## What is Linear Search?

* A simple searching technique that checks elements one by one.

---

## Algorithm

1. Start from index `0`.
2. Compare current element with target.
3. If found, return index.
4. Else continue till end.

---

## Complexity

* Best Case: `O(1)`
* Worst Case: `O(N)`
* Space: `O(1)`

---

# Day 06 – Remove Duplicates from Sorted Array

## Problem Statement

Remove duplicate elements from a sorted array without using extra space.

---

## Two Pointer Technique

* One pointer for unique elements.
* One pointer for traversal.

---

## Algorithm

1. Initialize `j = 0`.
2. Traverse from index `1`.
3. If current element ≠ previous unique element:

   * Increment `j` and store value.
4. New size = `j + 1`.

---

## Complexity

* Time: `O(N)`
* Space: `O(1)`

---

# Day 07 – Rotate Array by K Positions

## Problem Statement

Rotate the elements of an array by `K` positions.

* Left Rotation: Shift elements toward the beginning.
* Right Rotation: Shift elements toward the end.

Example:

```
Array:  [1, 2, 3, 4, 5]
K = 2 (Right Rotation)
Result: [4, 5, 1, 2, 3]
```

---

## Approach 1: Using Extra Array

1. Create a new array of same size.
2. For each element, place it at its new rotated position.
3. Copy elements back if required.

### Complexity

* Time: `O(N)`
* Space: `O(N)`

---

## Approach 2: In-Place Reversal Algorithm (Optimal)

### Logic (Right Rotation)

1. Reverse the entire array.
2. Reverse first `K` elements.
3. Reverse remaining `N - K` elements.

This works because reversing segments rearranges elements correctly.

### Complexity

* Time: `O(N)`
* Space: `O(1)`

---

## Important Notes

* Always reduce `K` using:
  `K = K % N` (to handle large K values).
* Works for both left and right rotation (logic slightly adjusted).
* In-place reversal is preferred in interviews.

---

# Final Summary

| Day | Topic                |
| --- | -------------------- |
| 01  | Array Basics         |
| 02  | Indexing & Traversal |
| 03  | Max & Second Max     |
| 04  | Reverse Array        |
| 05  | Linear Search        |
| 06  | Remove Duplicates    |
| 07  | Rotate Array by K    |

---

## Interview Notes ⭐

* Arrays are the foundation of all data structures.
* Master indexing, traversal, two-pointer techniques, and in-place modification.
* Always mention time and space complexity clearly.
* Rotation using reversal is a frequently asked coding interview problem.
