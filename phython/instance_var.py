class Dog:
    def __init__(self, name, age):
        self.name = name  # Instance variable for the dog's name
        self.age = age    # Instance variable for the dog's age

    def bark(self):
        print(f"{self.name} is barking!")

# Create instances of the Dog class
dog1 = Dog("Buddy", 3)
dog2 = Dog("Max", 5)

# Accessing instance variables
print(dog1.name)  # Output: Buddy
print(dog1.age)   # Output: 3

print(dog2.name)  # Output: Max
print(dog2.age)   # Output: 5

# Calling a method that uses an instance variable
dog1.bark()  # Output: Buddy is barking!
dog2.bark()  # Output: Max is barking!
