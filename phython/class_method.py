
class Dog:
    species = "Canis familiaris"

    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    @classmethod
    def get_species(self):
        return self.species

# Calling class method
print(Dog.get_species())  # Output: Canis familiaris

