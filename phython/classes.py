class Student:
  
    def __init__(self,name):
        self.name=name

    def welcome(self):
        print("Welcome to the class",self.name)



# object
s1=Student("karan")
s1.welcome()