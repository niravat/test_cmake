# utils.py

# A simple function to add two numbers
def add_numbers(a, b):
    return a + b

# A function with a possible bug: it divides by zero if b is 0
def divide_numbers(a, b):
    if b == 0:
        raise ValueError("Cannot divide by zero!")
    return a / b
