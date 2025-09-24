# CSE103 LA1
## 1. Operators
**Question:**\
Write a C program that swaps two integer variables without using a third variable or arithmetic operators (`+`, `-`, `*`, `/`). Use bitwise operators to achieve the swap.

**Solution:**\
The Black Magic Method - [(p1_1.c)](p1_1.c)\
Recursive Function Method - [(p1_2.c)](p1_2.c)

## 2. Branching
**Question:**\
Write a function in C that takes an integer n and returns:
 - `"Prime"` if n is a prime number,
 - `"Perfect Square"` if n is a perfect square,
 - `"Neither"` otherwise.

Your program should handle edge cases (e.g., `n <= 1`) correctly.

**Solution:**\
[(p2.c)](p2.c)

## 3. Looping

**Question:**\
Write a C program to print the first `n` numbers in the Fibonacci sequence using a `for` loop, but without using any additional variables except for the current and previous two numbers.

**Solution:**\
[(p3.c)](p3.c)

## 4. 1D Array

**Question:**\
Write a C function that takes an array of integers and its size, then returns the length of the longest contiguous subarray where the difference between consecutive elements is exactly 1 or -1.

Example:\
Input: `[2, 3, 4, 3, 2, 1, 2]`\
Output: `5` (for the subarray `[4, 3, 2, 1, 2]`)

**Solution:**\
[(p4.c)](p4.c)

## 5. Mixed Concepts (Operators, Branching, Looping, Array)

**Question:**\
Write a C program that takes an array of integers and separates the numbers into two arrays: one containing all even numbers, and the other containing all odd numbers. Then, print the two arrays in reverse order using only pointer arithmetic (no indexing).

**Solution:**\
[(p5.c)](p5.c)
