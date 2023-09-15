def find_missing_number(arr, n):
    # Calculate the expected sum of the first n natural numbers
    expected_sum = (n * (n + 1)) // 2
    
    # Calculate the actual sum of the elements in the array
    actual_sum = sum(arr)
    
    # The missing number is the difference between the expected sum and the actual sum
    missing_number = expected_sum - actual_sum
    
    return missing_number

# Example usage
arr = [1, 2, 4, 5, 3, 7, 8]
n = len(arr)+1
missing_number = find_missing_number(arr, n)
print("Missing Number:", missing_number)