Problem Statement: Recursive Palindrome Check

Description:
You are given a string s. Write a recursive function to determine if s is a palindrome or not. A palindrome is a string that reads the same forwards and backwards.

Example:
Input:
s = "racecar"

Output:
True (because "racecar" is a palindrome)

Code Explanation:
In this code, the is_palindrome function checks if a given string is a palindrome recursively. There are two cases:

Base Case: If the string has a length of 1 or less, it's considered a palindrome (an empty string is also a palindrome).

Recursive Case: For longer strings, it checks if the first and last characters of the string match. If they do, it recursively checks if the substring without the first and last characters is a palindrome.

The code effectively determines whether a given string is a palindrome using recursion.
