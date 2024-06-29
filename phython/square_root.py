import math
def Calculate_sq_root(number):
    if number<0 :
       print("Not Valid")
    else:
       return math.sqrt(number)
number=8
result=Calculate_sq_root(number)
print(result)    

