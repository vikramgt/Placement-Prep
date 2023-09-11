Problem Statement: Find the Least Common Multiple (LCM) of Two Numbers

Description:
You are given two positive integers, a and b. Your task is to find and print the least common multiple (LCM) of these two numbers.

Example:

Input:
a = 4
b = 6
Output:
"The LCM is: 12"

Code Explanation:

The program prompts the user to enter two positive integers, a and b, for which the LCM needs to be calculated.

The LCM of two numbers a and b is defined as the smallest positive integer that is divisible by both a and b.

The lcm function is defined to calculate the LCM of a and b. It uses a for loop that starts from 1 and iterates through positive integers until it finds a number i that is both divisible by a and b. When such a number is found, it is returned as the LCM.

Finally, the program prints the calculated LCM.
