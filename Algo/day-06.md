## DATE: 32/1/2026

## Question:
### Remove Duplicates from a Sorted Array

---

# Algorithm: Remove Duplicates from a Sorted Array (In-Place)

## Step 1: Start
- Declare and initialize a **sorted integer array** with duplicate elements.
- Calculate the size of the array `n`.

---

## Step 2: Initialize Pointer
- Initialize an index variable `j = 0`.
- This index keeps track of the position of the **last unique element**.

---

## Step 3: Traverse the Array
- Start traversing the array from index `i = 1` to `n - 1`.

---

## Step 4: Compare Adjacent Elements
- For each element at index `i`:
  - Compare `a[i]` with `a[j]`.

---

## Step 5: Store Unique Elements
- If `a[i]` is **not equal** to `a[j]`:
  - Increment `j` by `1`.
  - Copy `a[i]` into `a[j]`.

---

## Step 6: Continue Traversal
- Repeat **Step 4 and Step 5** until all elements are processed.

---

## Step 7: Return New Length
- Return `j + 1` as the new size of the array containing only unique elements.

---

## Step 8: Print Result
- Print the array elements from index `0` to `j` (new size).
- These elements represent the array **after removing duplicates**.

---

## Step 9: End
- Terminate the program.

---

## Complexity Analysis
- **Time Complexity:** `O(N)`
- **Space Complexity:** `O(1)` (in-place modification)

---

## Notes
- The algorithm works **only for sorted arrays**.
- Duplicate elements are removed **without using extra memory**.
- Original array is modified to store unique elements at the front.
- Remaining elements beyond the new length are ignored.

---

## Interview Tip 
> This is a classic **two-pointer technique** problem.  
> Always mention that the array must be **sorted** for this logic to work correctly.
