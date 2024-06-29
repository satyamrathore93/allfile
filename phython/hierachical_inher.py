# Base class
class Animal:
    def __init__(self, name):
        self.name = name

    def eat(self):
        print(f"{self.name} is eating")

# Derived class Lion
class Lion(Animal):
    def roar(self):
        print(f"{self.name} is roaring")

# Derived class Elephant
class Elephant(Animal):
    def trumpet(self):
        print(f"{self.name} is trumpeting")

# Derived class Monkey
class Monkey(Animal):
    def climb(self):
        print(f"{self.name} is climbing a tree")

# Create instances of each animal
simba = Lion("Simba")
dumbo = Elephant("Dumbo")
george = Monkey("George")

# Call methods on each instance
simba.eat()      # Output: Simba is eating
simba.roar()     # Output: Simba is roaring

dumbo.eat()      # Output: Dumbo is eating
dumbo.trumpet()  # Output: Dumbo is trumpeting

george.eat()     # Output: George is eating
george.climb()   # Output: George is climbing a tree
