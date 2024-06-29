
# Non static methods
class Student:
    def __init__(self, name, age,subject):
        self.name = name
        self.age=age
        self.subject=subject

def Student_data(self):
    print("Name:", self.name)
    print("age:",self.age)
    print("marks:",self.subject)

s1=Student("monhan",44,55)
s1.Student_data()  

