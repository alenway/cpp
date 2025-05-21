---

### **1. Basic Array Questions**
#### **Q1. Sum of Array Elements**
Write a program to calculate the sum of all elements in an integer array.
**Example:**
Input: `[5, 10, 15, 20]`
Output: `50`

#### **Q2. Find Maximum Element**
Write a function to find the largest element in an array.
**Example:**
Input: `[3, 9, 2, 5]`
Output: `9`

#### **Q3. Reverse an Array**
Reverse the elements of an array without using a second array.
**Example:**
Input: `[1, 2, 3, 4]`
Output: `[4, 3, 2, 1]`

#### **Q4. Count Even and Odd Numbers**
Count how many even and odd numbers are in an array.
**Example:**
Input: `[2, 7, 4, 9, 6]`
Output: `Even: 3, Odd: 2`

---

### **2. Intermediate Array Questions**
#### **Q5. Check if Array is Palindrome**
Determine if an array reads the same forwards and backwards.
**Example:**
Input: `[1, 2, 3, 2, 1]`
Output: `Palindrome`
Input: `[1, 2, 3, 4]`
Output: `Not Palindrome`

#### **Q6. Remove Duplicates from Sorted Array**
Given a sorted array, remove duplicates in-place (no extra array).
**Example:**
Input: `[1, 1, 2, 2, 3, 4, 4]`
Output: `[1, 2, 3, 4]`

#### **Q7. Merge Two Sorted Arrays**
Merge two sorted arrays into a single sorted array.
**Example:**
Input: `[1, 3, 5]` and `[2, 4, 6]`
Output: `[1, 2, 3, 4, 5, 6]`

#### **Q8. Find Missing Number in Array**
Given an array of size `n` with numbers from `1` to `n+1` (one missing), find the missing number.
**Example:**
Input: `[1, 3, 4, 5]` (n = 4, missing `2`)
Output: `2`

---

### **3. Advanced Array Questions**
#### **Q9. Two Sum Problem**
Given an array and a target sum, find two numbers that add up to the target.
**Example:**
Input: `[2, 7, 11, 15]`, Target: `9`
Output: `[2, 7]` (indices 0 and 1)

#### **Q10. Rotate Array by K Positions**
Rotate an array to the right by `k` steps.
**Example:**
Input: `[1, 2, 3, 4, 5]`, `k = 2`
Output: `[4, 5, 1, 2, 3]`

#### **Q11. Find the Second Largest Element**
Find the second largest element in an unsorted array.
**Example:**
Input: `[10, 5, 20, 8]`
Output: `10`

#### **Q12. Subarray with Maximum Sum (Kadane’s Algorithm)**
Find the contiguous subarray with the largest sum.
**Example:**
Input: `[-2, 1, -3, 4, -1, 2, 1, -5, 4]`
Output: `[4, -1, 2, 1]` (Sum = 6)

---

### **4. Conceptual Questions**
1. What is the difference between `int arr[5]` and `int *arr = malloc(5 * sizeof(int))`?
2. Why does `sizeof(arr)` give different results in a function compared to `main()`?
3. How do you pass a 2D array to a function in C?
4. What happens if you access `arr[-1]` or `arr[100]` in a 10-element array?

---

### **Tips for Solving:**
- Use loops (`for`, `while`) to traverse arrays.
- For in-place modifications (e.g., reversing), use two pointers (start + end).
- For problems like **Q9 (Two Sum)**, consider using a hash table (or brute-force for small arrays).
