def is_palindrome(s):
    # Base case: An empty string or a string with one character is always a palindrome
    if len(s) <= 1:
        return True
    # Recursive case: Check if the first and last characters of the string match
    if s[0] == s[-1]:
        # If they match, check if the substring without the first and last characters is a palindrome
        return is_palindrome(s[1:-1])
    else:
        # If they don't match, the string is not a palindrome
        return False

# Example usage
s = "racecar"
result = is_palindrome(s)
print(f'Is "{s}" a palindrome? {result}')