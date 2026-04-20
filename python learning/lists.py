# Example with fruits
fruits = "mango,banana,apple,orange"
fruits = fruits.split(",")  # Split the string into a list
fruits.append("lemon")  # Add "lemon" to the end of the list
print(fruits)  # Output: ['mango', 'banana', 'apple', 'orange', 'lemon']

fruits.insert(3, "grapes")  # Insert "grapes" at index 3
print(fruits)  # Output: ['mango', 'banana', 'apple', 'grapes', 'orange', 'lemon']

# Example with nested lists
lst = [10, 20, 30, ['jane', 'mary', [1000, 2000, 3000]], 40, 50, 60]
lst.append(70)  # Add 70 to the end of the list
print(lst)  # Output: [10, 20, 30, ['jane', 'mary', [1000, 2000, 3000]], 40, 50, 60, 70]

lst[3][2].insert(1, 1500)  # Insert 1500 at index 1 in the innermost list
print(lst)  # Output: [10, 20, 30, ['jane', 'mary', [1000, 1500, 2000, 3000]], 40, 50, 60, 70]

lst[3][2].remove(2000)  # Remove 2000 from the innermost list
print(lst)  # Output: [10, 20, 30, ['jane', 'mary', [1000, 1500, 3000]], 40, 50, 60, 70]


