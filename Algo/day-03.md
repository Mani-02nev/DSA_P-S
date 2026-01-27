## DATE:24/1/2026
## Question:
### Reverse an Array
### PROBLEM:
     - Given an array of size N, rearrange the elements so that the array order is reversed without using extra space.
# Algorithm:
## Algorithm: Reverse an Array

### Step 1: Start
- Initialize two positions:
  - `start` pointing to the first element of the array.
  - `end` pointing to the last element of the array.

---

### Step 2: Condition Check
- Check whether `start` is less than `end`.
- If the condition is false, the array is already fully reversed.

---

### Step 3: Swap
- Swap the element at position `start` with the element at position `end`.

---

### Step 4: Move
- Increment `start` by 1 (move forward).
- Decrement `end` by 1 (move backward).

---

### Step 5: Repeat
- Repeat **Step 2 to Step 4** until:
  - `start` is equal to or greater than `end`.

---

### Step 6: End
- Stop the algorithm.
- The array is now reversed in place.

---

## Complexity Analysis
- **Time Complexity:** `O(N)`
- **Space Complexity:** `O(1)`

---

## Notes
- Works for both **C++ arrays/vectors** and **Python lists**.
- Uses the in-place **two-pointer technique**.
- No extra memory required.