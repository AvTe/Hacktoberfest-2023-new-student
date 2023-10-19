# Import the array module
from array import array

# Create an array of integers
integer_array = array('i', [1, 2, 3, 4, 5])

# Print the original array
print("Original Array:", integer_array)

# Append an element to the array
integer_array.append(6)

# Print the modified array
print("Array after appending 6:", integer_array)

# Access elements by index
print("Element at index 2:", integer_array[2])

# Remove an element by value
integer_array.remove(3)

# Print the array after removing 3
print("Array after removing 3:", integer_array)

# Iterate through the elements
print("Iterating through the array:")
for element in integer_array:
    print(element, end=" ")

# Find the index of an element
element_to_find = 4
if element_to_find in integer_array:
    index = integer_array.index(element_to_find)
    print(f"\nIndex of {element_to_find}: {index}")
else:
    print(f"{element_to_find} not found in the array")

# Get the length of the array
array_length = len(integer_array)
print("Array length:", array_length)
