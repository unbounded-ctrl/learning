# Python Basics Tutorial

# 1. Variables and Data Types
print("\n1. Variables and Data Types:")
name = "Alice"  # String
age = 25  # Integer
height = 5.6  # Float
is_student = True  # Boolean
print(f"Name: {name}, Age: {age}, Height: {height}, Is Student: {is_student}")

# 2. Lists (Arrays in Python)
print("\n2. Lists:")
fruits = ["apple", "banana", "cherry"]
print("Fruits:", fruits)
fruits.append("orange")  # Add an item
print("After adding orange:", fruits)
print("First fruit:", fruits[0])  # Access by index

# 3. Tuples (Immutable Lists)
print("\n3. Tuples:")
coordinates = (10, 20)
print("Coordinates:", coordinates)

# 4. Dictionaries (Key-Value Pairs)
print("\n4. Dictionaries:")
person = {"name": "Bob", "age": 30, "city": "New York"}
print("Person:", person)
print("Name:", person["name"])  # Access by key
person["age"] = 31  # Update value
print("Updated age:", person["age"])

# 5. Conditional Statements
print("\n5. Conditional Statements:")
if age > 18:
    print("You are an adult.")
else:
    print("You are a minor.")

# 6. Loops
print("\n6. Loops:")
print("For loop:")
for fruit in fruits:
    print(fruit)

print("While loop:")
count = 0
while count < 3:
    print(count)
    count += 1

# 7. Functions
print("\n7. Functions:")
def greet(name):
    return f"Hello, {name}!"

print(greet("Alice"))

# 8. Classes and Objects
print("\n8. Classes and Objects:")
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def introduce(self):
        return f"My name is {self.name} and I am {self.age} years old."

person1 = Person("Charlie", 35)
print(person1.introduce())

# 9. File Handling
print("\n9. File Handling:")
with open("example.txt", "w") as file:
    file.write("Hello, this is a file example.")

with open("example.txt", "r") as file:
    content = file.read()
    print("File content:", content)

# 10. Exception Handling
print("\n10. Exception Handling:")
try:
    result = 10 / 0
except ZeroDivisionError:
    print("You cannot divide by zero!")
finally:
    print("This block always executes.")

# 11. Modules and Libraries
print("\n11. Modules and Libraries:")
import math
print("Square root of 16:", math.sqrt(16))

# 12. List Comprehensions
print("\n12. List Comprehensions:")
squares = [x**2 for x in range(5)]
print("Squares:", squares)

# 13. Lambda Functions
print("\n13. Lambda Functions:")
add = lambda a, b: a + b
print("Sum of 5 and 3:", add(5, 3))

# 14. Working with Sets
print("\n14. Sets:")
unique_numbers = {1, 2, 3, 3, 4}
print("Unique numbers:", unique_numbers)

# 15. Working with Strings
print("\n15. Strings:")
text = "  Hello, Python!  "
print("Original:", text)
print("Lowercase:", text.lower())
print("Stripped:", text.strip())
print("Split:", text.split(","))

# 16. Importing Custom Modules
print("\n16. Importing Custom Modules:")
# Create a file `custom_module.py` with a function `def greet(name): return f"Hello, {name}!"`
# Then import it here:
# from custom_module import greet
# print(greet("Alice"))

# 17. Working with JSON
print("\n17. JSON:")
import json
data = {"name": "Alice", "age": 25}
json_data = json.dumps(data)  # Convert to JSON string
print("JSON Data:", json_data)
parsed_data = json.loads(json_data)  # Convert back to dictionary
print("Parsed Data:", parsed_data)

# 18. Working with Dates and Times
print("\n18. Dates and Times:")
from datetime import datetime
now = datetime.now()
print("Current Date and Time:", now)

# 19. Generators
print("\n19. Generators:")
def my_generator():
    for i in range(3):
        yield i

for value in my_generator():
    print("Generated value:", value)

# 20. Decorators
print("\n20. Decorators:")
def decorator(func):
    def wrapper():
        print("Before the function call")
        func()
        print("After the function call")
    return wrapper

@decorator
def say_hello():
    print("Hello!")

say_hello() # Python String Methods Tutorial

# 1. capitalize()
print("\n1. capitalize():")
text = "hello, world!"
print("Original:", text)
print("Capitalized:", text.capitalize())

# 2. upper() and lower()
print("\n2. upper() and lower():")
print("Uppercase:", text.upper())
print("Lowercase:", text.lower())

# 3. title()
print("\n3. title():")
print("Title Case:", text.title())

# 4. strip(), lstrip(), and rstrip()
print("\n4. strip(), lstrip(), and rstrip():")
text_with_spaces = "   Hello, Python!   "
print("Original:", f"'{text_with_spaces}'")
print("Stripped:", f"'{text_with_spaces.strip()}'")
print("Left Stripped:", f"'{text_with_spaces.lstrip()}'")
print("Right Stripped:", f"'{text_with_spaces.rstrip()}'")

# 5. split() and join()
print("\n5. split() and join():")
text = "apple,banana,cherry"
words = text.split(",")  # Split into a list
print("Split:", words)
joined_text = " | ".join(words)  # Join the list into a string
print("Joined:", joined_text)

# 6. find() and index()
print("\n6. find() and index():")
text = "hello, world!"
print("Find 'world':", text.find("world"))  # Returns the index of the first occurrence
print("Find 'Python':", text.find("Python"))  # Returns -1 if not found
print("Index 'world':", text.index("world"))  # Same as find(), but raises an error if not found

# 7. replace()
print("\n7. replace():")
text = "I love Python. Python is great!"
print("Original:", text)
print("Replaced:", text.replace("Python", "programming"))

# 8. count()
print("\n8. count():")
text = "banana"
print("Count 'a':", text.count("a"))

# 9. startswith() and endswith()
print("\n9. startswith() and endswith():")
text = "hello, world!"
print("Starts with 'hello':", text.startswith("hello"))
print("Ends with 'world!':", text.endswith("world!"))

# 10. isalpha(), isdigit(), and isalnum()
print("\n10. isalpha(), isdigit(), and isalnum():")
text_alpha = "Hello"
text_digit = "12345"
text_alnum = "Hello123"
print("Is Alpha:", text_alpha.isalpha())  # True if all characters are alphabetic
print("Is Digit:", text_digit.isdigit())  # True if all characters are digits
print("Is Alphanumeric:", text_alnum.isalnum())  # True if all characters are alphanumeric

# 11. len()
print("\n11. len():")
text = "Hello, Python!"
print("Length of text:", len(text))

# 12. in and not in
print("\n12. in and not in:")
text = "Hello, Python!"
print("'Python' in text:", "Python" in text)
print("'Java' not in text:", "Java" not in text)

# 13. format() and f-strings
print("\n13. format() and f-strings:")
name = "Alice"
age = 25
print("Using format():", "My name is {} and I am {} years old.".format(name, age))
print("Using f-strings:", f"My name is {name} and I am {age} years old.")

# 14. zfill()
print("\n14. zfill():")
number = "42"
print("Zero-filled:", number.zfill(5))  # Pads with zeros to make the string length 5

# 15. casefold()
print("\n15. casefold():")
text = "HELLO"
print("Casefolded:", text.casefold())  # Similar to lower(), but more aggressive for certain languages