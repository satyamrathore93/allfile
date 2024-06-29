# def circulate_values(a, b, c):
#     a, b, c = c, a, b
#     return a, b, c

# # Example usage
# a = 1
# b = 2
# c = 3
# print(f"Before circulation: a = {a}, b = {b}, c = {c}")
# a, b, c = circulate_values(a, b, c)
# print(f"After circulation: a = {a}, b = {b}, c = {c}")
def circulate_values(values, positions):
    # Check if the list is not empty
    if not values:
        return values
    
    # Calculate the effective number of positions to circulate
    positions = positions % len(values)
    
    # Circulate the values by slicing
    circulated_values = values[-positions:] + values[:-positions]
    
    return circulated_values

# Example usage with specified positions
values = [1, 2, 3, 4, 5]
positions=2
print(f"Before circulation: {values}")
circulated_values = circulate_values(values, positions)
print(f"After circulation by {positions} positions: {circulated_values}")
