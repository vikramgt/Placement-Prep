Problem Statement: Check If a Number Is a Power of Two

Description:
You are given an integer x. Your task is to determine whether x is a power of two. Return true if it is, and false if it's not.

Example:
Input: x = 31
Output: false

Input: x = 64
Output: true

Code Explanation
The program defines a function isPowerOfTwo that takes an integer x as input and returns a boolean value (0 for false, 1 for true) indicating whether x is a power of two.

Inside the isPowerOfTwo function, it uses bitwise operations to determine if x is a power of two. It checks if x is not zero and has only one bit set (i.e., it is a power of two).

In the main function, there are calls to the isPowerOfTwo function with different values, and the results are printed to the console.
