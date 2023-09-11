Problem Statement: Search for a Key in an Array

Description:

You are given an integer array a of size n, and a key key. Your task is to find and print the position (1-based index) of the key in the array. If the key is not found in the array, print a message indicating that the key was not found.

Example:

Input:

Array a: [5, 12, 25, 7, 10]
Size n: 5
Key key: 25
Output:

"Key 25 found at array position 3"

Code Explanation:

The program prompts the user to enter the size of the array and the array elements, as well as the key to be searched.
It then iterates through each element in the array and checks if the current element is equal to the key. If a match is found, it prints the position of the key and breaks out of the loop. If no match is found after iterating through the entire array, it prints a message indicating that the key was not found.
