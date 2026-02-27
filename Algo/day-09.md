# 📅 DATE: 01/02/2026

# 📘 Day 9 – Move All Zeros to End

---

## 🔹 Question

### Move All Zeros to End (Maintain Order of Non-Zero Elements)

Given an integer array `arr` of size `n`, move all `0`s to the end of the array **without changing the relative order of non-zero elements**.

---

## 🔹 Example

```
Input:
arr = [0, 1, 0, 3, 12]

Output:
[1, 3, 12, 0, 0]
```

---

# 🔷 Algorithm: Move All Zeros to End (Two Pointer – In-Place)

## Step 1: Start

* Declare and initialize integer array `arr`.
* Calculate the size of the array `n`.

---

## Step 2: Initialize Pointer

* Initialize index variable `j = 0`.
* This pointer keeps track of the position where the next non-zero element should be placed.

---

## Step 3: Traverse the Array

* Traverse the array from index `i = 0` to `n - 1`.

---

## Step 4: Check for Non-Zero Element

* For each element at index `i`:

  * If `arr[i] != 0`:

---

## Step 5: Swap Elements

* Swap `arr[i]` with `arr[j]`.
* Increment `j` by `1`.

---

## Step 6: Continue Traversal

* Repeat Step 4 and Step 5 until all elements are processed.

---

## Step 7: End

* After traversal completes, all non-zero elements will be at the front.
* All zeros will automatically move to the end.

---

## 🔹 Clean Pseudocode

```
Algorithm MoveZeros(arr, n):

1. Initialize j = 0

2. For i = 0 to n - 1:
       If arr[i] != 0:
           Swap arr[i] and arr[j]
           j = j + 1

3. End
```

---

## 🔹 Dry Run

```
arr = [0,1,0,3,12]
```

| i | arr[i] | Action           | Array State |
| - | ------ | ---------------- | ----------- |
| 0 | 0      | Skip             | 0 1 0 3 12  |
| 1 | 1      | Swap with arr[0] | 1 0 0 3 12  |
| 2 | 0      | Skip             | 1 0 0 3 12  |
| 3 | 3      | Swap with arr[1] | 1 3 0 0 12  |
| 4 | 12     | Swap with arr[2] | 1 3 12 0 0  |

Final Output:

```
[1,3,12,0,0]
```

---

## 🔹 Complexity Analysis

* **Time Complexity:** O(N)
* **Space Complexity:** O(1) (In-place modification)

---

## 🔹 Notes

* Order of non-zero elements is preserved.
* No extra array is used.
* This is a classic **Two Pointer Technique** problem.
* Works for positive and negative numbers.
* If no zeros are present → array remains unchanged.

---

## 🔹 Interview Tip

> Mention that this is a stable in-place partitioning problem.
> Always state that the solution runs in O(N) time and O(1) space.
