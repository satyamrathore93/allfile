# Base class
class Shape:
    def draw(self):
        pass  # This method will be overridden in derived classes

# Derived class Circle
class Circle(Shape):
    def draw(self):
        print("Drawing a Circle")

# Derived class Rectangle
class Rectangle(Shape):
    def draw(self):
        print("Drawing a Rectangle")

# Create instances of Circle and Rectangle
circle = Circle()
rectangle = Rectangle()

# Create a list of shapes
shapes = [circle, rectangle]


# Call the draw method on each shape
for shape in shapes:
    shape.draw()

# Output:
# Drawing a Circle
# Drawing a Rectangle
