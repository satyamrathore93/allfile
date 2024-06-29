import math

def calculate_distance(x1, y1, x2, y2):
    distance = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
    return distance

# Example usage
x1, y1 = 1, 2
x2, y2 = 4, 6
distance = calculate_distance(x1, y1, x2, y2)
print(f"The distance between ({x1}, {y1}) and ({x2}, {y2}) is {distance}")
