# Arrays – Advanced Problems (Day 08 to Day 10)

---

## Day 08 – Pair with Given Sum

### Problem Statement

Given an array of integers and a target value, determine if there exists a pair of elements whose sum equals the target.

Example:

```
Array: [2, 7, 11, 15]
Target: 9
Output: (2, 7)
```

---

### Approach 1: Brute Force

1. Use two nested loops.
2. For each element, check all other elements.
3. If sum equals target, return the pair.

#### Complexity

* Time: O(N^2)
* Space: O(1)

---

### Approach 2: Using Hashing (Optimal)

1. Create an empty hash set/map.
2. Traverse the array.
3. For each element `x`, compute `target - x`.
4. If the complement exists in the hash structure, pair found.
5. Otherwise, insert `x` into hash structure.

#### Complexity

* Time: O(N)
* Space: O(N)

---

### Notes

* Works for unsorted arrays.
* Hashing method preferred in interviews.
* For sorted arrays, two-pointer technique can be used.

============================================================

## Day 09 – Move All Zeros to End

### Problem Statement

Move all zeros in the array to the end while maintaining the relative order of non-zero elements.

Example:

```
Array: [0,1,0,3,12]
Output: [1,3,12,0,0]
```

---

### Optimal Approach (Two Pointer Technique)

1. Initialize `j = 0`.
2. Traverse the array using index `i`.
3. If element is non-zero:

   * Swap `arr[i]` with `arr[j]`.
   * Increment `j`.
4. Continue until end.

#### Complexity

* Time: O(N)
* Space: O(1)

---

### Notes

* Maintains original order of non-zero elements.
* In-place solution.
* Classic two-pointer problem.

============================================================

## Day 10 – Container With Most Water

### Problem Statement

Given an array where each element represents the height of a vertical line, find two lines that together form a container holding the maximum water.

Example:

```
Height: [1,8,6,2,5,4,8,3,7]
Output: 49
```

---

### Brute Force Approach

1. Use two nested loops.
2. Calculate area for every pair.
3. Track maximum area.

#### Complexity

* Time: O(N^2)
* Space: O(1)

---

### Optimal Approach (Two Pointer Technique)

1. Initialize `left = 0`, `right = n-1`.
2. Compute area = min(height[left], height[right]) * (right - left).
3. Update maximum area.
4. Move the pointer with smaller height inward.
5. Repeat until `left < right`.

#### Complexity

* Time: O(N)
* Space: O(1)

---

### Key Insight

* Area depends on shorter height.
* Moving the taller pointer does not increase area.
* Two-pointer greedy logic ensures optimal solution.

============================================================

# Summary Table (Day 08 – Day 10)

| Day | Problem                   | Technique             | Time Complexity |
| --- | ------------------------- | --------------------- | --------------- |
| 08  | Pair with Given Sum       | Hashing / Two Pointer | O(N)            |
| 09  | Move Zeros to End         | Two Pointer           | O(N)            |
| 10  | Container With Most Water | Two Pointer           | O(N)            |

============================================================

## Interview Preparation Notes 

* Two-pointer technique is heavily tested in array problems.
* Always compare brute force vs optimal approach.
* Explain time and space complexity clearly.
* Practice dry runs for pointer movement logic.
