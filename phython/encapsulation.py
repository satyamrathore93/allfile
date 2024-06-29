class Person:
    def __init__(self, name, age):
        self._name = name  # Private attribute
        self._age = age    # Private attribute

    # Getter method for name
    def get_name(self):
        return self._name

    # Setter method for name
    def set_name(self, name):
        self._name = name

    # Getter method for age
    def get_age(self):
        return self._age

    # Setter method for age
    def set_age(self, age):
        if age > 0:  # Validating age
            self._age = age
        else:
            print("Age must be positive")

# Create an instance of Person
person1 = Person("Alice", 30)

# Accessing and updating name using getter and setter methods
print(person1.get_name())  # Output: Alice
person1.set_name("Bob")
print(person1.get_name())  # Output: Bob

# Accessing and updating age using getter and setter methods
print(person1.get_age())   # Output: 30
person1.set_age(35)
print(person1.get_age())   # Output: 35

# Attempt to set an invalid age
person1.set_age(-5)        # Output: Age must be positive
print(person1.get_age())   # Output: 35
