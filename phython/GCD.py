# def Calculate_gcd(num1,num2):
#     while num1 != num2:
#         if num1>num2:
#              num1=num1-num2
#         else:
#         num2=num2-num1
        
#     return num1  


# num1=4    
# num2=6
# result=Calculate_gcd(num1,num2)   
# print(result)
def calculate_gcd(num1, num2):
    while num1 != num2:
        if num1 > num2:
            num1 = num1 - num2
        else:
            num2 = num2 - num1
    return num1

num1 = 4    
num2 = 6
result = calculate_gcd(num1, num2)   
print(result)  # Output: 2
