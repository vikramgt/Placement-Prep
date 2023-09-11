Problem Statement: Find the Largest Number in an Array

Description:
You are given an integer array a of size m. Your task is to find and print the largest number in the array.

Example:
Input:
m = 5
Array a: [12, 5, 7, 29, 8]

Output:
"The largest number is: 29"

Code Explanation:

The program first prompts the user to enter the number of elements m in the array and then initializes an integer array a with a maximum size of 100.
It then asks the user to enter the elements of the array one by one, and stores them in the a array using a for loop.
After reading the elements, the program prints the entered elements to confirm with a second for loop.
To find the largest number in the array, the program initializes a variable max with the first element of the array (a[0]).
It then iterates through the elements of the array using a for loop starting from the second element (i = 1). If it finds an element a[i] that is greater than the current maximum max, it updates max to the value of a[i].
Finally, the program prints the largest number found.
This code allows you to enter an array of integers, and it will find and print the largest number among them.
