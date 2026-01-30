## DATE: 31/1/2026

## Question:
### Find the Biggest and Second Biggest Element in an Array

---

# Algorithm: Find Maximum and Second Maximum Element

## Step 1: Start
- Declare and initialize an integer array with predefined elements.
- Initialize two variables:
  - `big` with the first element of the array (to store the maximum value).
  - `big_2` with `0` (to store the second maximum value).

---

## Step 2: Traverse the Array
- Use a loop to iterate through each element of the array.

---

## Step 3: Compare Elements
- For each element `x` in the array:
  - If `x` is greater than `big`:
    - Assign the current value of `big` to `big_2`.
    - Update `big` with the value of `x`.

---

## Step 4: Continue Traversal
- Continue comparing elements until the last element of the array is processed.

---

## Step 5: Display the Array
- Print all elements of the given array.

---

## Step 6: Display Results
- Print the value stored in `big` as the biggest element.
- Print the value stored in `big_2` as the second biggest element.

---

## Step 7: End
- Terminate the program after displaying the results.

---

## Complexity Analysis
- **Time Complexity:** `O(N)`
- **Space Complexity:** `O(1)`

---

## Notes
- This algorithm finds the biggest and second biggest elements in a **single traversal**.
- No sorting is required.
- Uses constant extra space.
- Suitable for both **C++ and Python** logic understanding.

---

## Interview Tip ⭐
> For more robust logic, ensure the second biggest element is also updated when the value lies between `big` and `big_2`.
