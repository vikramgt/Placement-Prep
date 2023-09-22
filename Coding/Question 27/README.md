Problem Statement: Find the Missing Number in an Array

Description:

You are given an array of n-1 unique integers from 1 to n, where n is a positive integer. The array is missing one number from this range. Your task is to find and return the missing number.

Example:

Input:
Array: [1, 2, 4, 6, 3, 7, 8]
n = len(arr) + 1

Output:
Missing Number: 5


Code Explanation:
In this code, we define a function find_missing_number that takes an array arr and the integer n as input. It calculates the expected sum of the first n natural numbers and the actual sum of the elements in the array. The missing number is then determined by finding the difference between the expected sum and the actual sum.

This code effectively finds and returns the missing number in the given array of unique integers from 1 to n.
