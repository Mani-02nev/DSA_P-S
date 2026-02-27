# 📅 DATE: 02/02/2026

# 📘 Day 10 – Container With Most Water

---

##   Question

### Container With Most Water

Given an array `height[]` of size `n`, where each element represents the height of a vertical line, find two lines that together with the x-axis form a container such that the container holds the **maximum amount of water**.

You must return the **maximum area**.

---

##   Example

```
Input:
height = [1,8,6,2,5,4,8,3,7]

Output:
49
```

Explanation:
The maximum water is formed between heights 8 and 7.
Width = 7 (distance between indices)
Height = min(8,7) = 7
Area = 7 × 7 = 49

---

# 🔷 Important Formula

```
Area = min(height[left], height[right]) × (right - left)
```

---

# 🔷 Algorithm: Container With Most Water (Two Pointer – Optimal)

## Step 1: Start

* Declare and initialize array `height`.
* Calculate size `n`.

---

## Step 2: Initialize Two Pointers

* `left = 0`
* `right = n - 1`
* Initialize `maxArea = 0`

---

## Step 3: Traverse Using While Loop

* While `left < right`:

---

## Step 4: Calculate Current Area

```
width = right - left
currentHeight = min(height[left], height[right])
area = width × currentHeight
```

---

## Step 5: Update Maximum Area

* If `area > maxArea`

  * Update `maxArea`

---

## Step 6: Move Pointer Strategically

* If `height[left] < height[right]`

  * Increment `left`
* Else

  * Decrement `right`

Reason:
Moving the smaller height may increase area.
Moving the taller height will not help because height is limited by minimum.

---

## Step 7: End Loop

* When `left >= right`, stop.

---

## Step 8: Return Result

* Return `maxArea`.

---

#   Clean Pseudocode

```
Algorithm MaxWater(height, n):

1. left = 0
2. right = n - 1
3. maxArea = 0

4. While left < right:
       width = right - left
       h = min(height[left], height[right])
       area = width × h

       If area > maxArea:
           maxArea = area

       If height[left] < height[right]:
           left = left + 1
       Else:
           right = right - 1

5. Return maxArea
```

---

#  Dry Run

```
height = [1,8,6,2,5,4,8,3,7]
```

| left | right | min height | width | area | maxArea |
| ---- | ----- | ---------- | ----- | ---- | ------- |
| 1    | 7     | 1          | 8     | 8    | 8       |
| 8    | 7     | 7          | 7     | 49   | 49      |

Final Answer: 49

---

# Complexity Analysis

* **Time Complexity:** O(N)
* **Space Complexity:** O(1)

---

#  Why Two Pointer Works?

* Brute force checks all pairs → O(N²)
* Two pointer eliminates unnecessary comparisons
* Always move the pointer with smaller height
* Because area depends on the minimum height

---

#  Brute Force Algorithm (For Understanding)

## Steps:

1. Use two nested loops
2. Calculate area for every pair
3. Store maximum area

### Complexity:

* **Time:** O(N²)
* **Space:** O(1)

---

# Notes

* This is a classic **Two Pointer Optimization Problem**.
* Always mention the area formula clearly in interviews.
* Key observation: Move the smaller height pointer.
* Frequently asked in product-based companies.

---

#   Interview Tip

> Start by explaining brute force, then optimize using two pointers.
> Clearly justify why moving the smaller height pointer works.
