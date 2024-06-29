class person:
    def __init__(self, name, age):
        self.name=name
        self.age=age
    def  walking(self):
      print(f"the {self.name} is walking")

class Employee:
         def __init__(self,  salary):
            self.salary=salary
def working(self):
         print(f"the salary is {self.salary} ")

class Boy(person, Employee):
    def __init__(self, name, age, salary):
        person.__init__(self, name, age)
        Employee.__init__(self, salary)

b1=Boy("john",33, 44000)
print(b1.name)
b1.walking()

print(b1.salary) 
b1.working()    
             