class Car:
    @staticmethod
    def start():
        print("car Started")
    @staticmethod
    def stop():
        print("car stoped")

class ToyotaCar(Car):
      def __init__(self,name):
           self.name=name


class Fortuner(ToyotaCar):
       def  __init__(self, type):
            self.type=type


car1=ToyotaCar("Fortuner")
car2=ToyotaCar("RangeRover")
car1=Fortuner("gas")
print(car1.start())
print(car1.type)
