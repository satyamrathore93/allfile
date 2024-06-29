from abc import ABC, abstractmethod

# Abstract class
class Vehicle(ABC):
    @abstractmethod
    def start_engine(self):
        pass

    @abstractmethod
    def stop_engine(self):
        pass

    @abstractmethod
    def drive(self):
        pass

# Concrete class Car
class Car(Vehicle):
    def start_engine(self):
        print("Car engine started")

    def stop_engine(self):
        print("Car engine stopped")

    def drive(self):
        print("Car is being driven")

# Concrete class Bike
class Bike(Vehicle):
    def start_engine(self):
        print("Bike engine started")

    def stop_engine(self):
        print("Bike engine stopped")

    def drive(self):
        print("Bike is being ridden")

# Create instances of Car and Bike
my_car = Car()
my_bike = Bike()

# Use the abstract methods
my_car.start_engine()  # Output: Car engine started
my_car.drive()         # Output: Car is being driven
my_car.stop_engine()   # Output: Car engine stopped

my_bike.start_engine() # Output: Bike engine started
my_bike.drive()        # Output: Bike is being ridden
my_bike.stop_engine()  # Output: Bike engine stopped
