Convert String to Uppercase in C
This C program converts a given string to uppercase.

Code Explanation
The program defines a character array s with a size of 150 characters.

It prompts the user to enter a string using scanf and stores it in the s array. The %[^\n] format specifier is used to read the entire line until the newline character.

It then iterates through each character in the string and checks if it is a lowercase letter ('a' to 'z'). If a lowercase letter is found, it converts it to uppercase by subtracting 32 from its ASCII value.

Finally, it prints the modified string in uppercase.
