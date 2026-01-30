## DATE:30/1/2026
## Question:
### Reverse an Array
# Algorithm: Reverse an Array Using Extra Array

## Step 1: Start
- Declare and initialize an integer array with predefined elements.
- Calculate the size of the array using:
  - Total array size divided by size of one element.

---

## Step 2: Display Array Information
- Print a heading for the program.
- Display the size of the original array.

---

## Step 3: Create a Reverse Array
- Declare a new array `reverseArray` of the same size as the original array.
- Initialize an index variable `i` to `0` for the reverse array.

---

## Step 4: Traverse the Original Array
- Use a loop to iterate through each element of the original array.
- During each iteration:
  - Store the last element of the original array into `reverseArray[i]`.
  - Increment `i` by `1`.
  - Decrement `n` by `1` to move backward in the original array.

---

## Step 5: Print the Original Array
- Print each element of the original array during traversal.

---

## Step 6: Print the Reversed Array
- Traverse the `reverseArray`.
- Print all elements in reversed order.

---

## Step 7: End
- Terminate the program after displaying both arrays.

---

## Complexity Analysis
- **Time Complexity:** `O(N)`
- **Space Complexity:** `O(N)` (extra array used)

---

## Notes
- This algorithm reverses the array using an **auxiliary array**.
- The original array remains unchanged.
- Index `n - 1` is used to access elements from the end safely.
- This approach is simple but **not in-place**.

---


