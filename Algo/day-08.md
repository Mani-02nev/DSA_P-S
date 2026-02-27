# 📅 DATE: 31/1/2026

# 📘 Day 8 – Pair with Given Sum

---

## 🔹 Question

### Pair with Given Sum

Given an integer array `arr` of size `n` and a target value `X`, determine whether there exists a pair `(i, j)` such that:

```
arr[i] + arr[j] = X
where i ≠ j
```

---

# 🔷 Method 1: Brute Force Approach

## 🔹 Algorithm: PairSumBrute(arr, n, X)

### Step 1: Start

* Declare and initialize array `arr`.
* Input target value `X`.
* Calculate array size `n`.

### Step 2: Outer Loop

* Traverse `i` from `0` to `n - 2`.

### Step 3: Inner Loop

* For each `i`, traverse `j` from `i + 1` to `n - 1`.

### Step 4: Check Condition

* If:

```
arr[i] + arr[j] == X
```

* Return True (Pair Found).

### Step 5: End Condition

* If loops complete without finding a pair, return False.

---

## 🔹 Complexity Analysis

* **Time Complexity:** O(N²)
* **Space Complexity:** O(1)

---

# 🔷 Notes

* If array is **sorted**, prefer Two Pointer method.
* If array is **unsorted**, use Hashing method.
* Always clarify whether to return indices or just True/False.
* Handle edge cases: empty array, single element, duplicates, negative numbers.

---

# 🔷 Interview Tip

> This is a classic problem testing Two Pointer Technique and Hashing.
> Always mention time and space trade-offs clearly.
