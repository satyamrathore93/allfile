def Linear_search(list,num):
    for i in range(len(list)):
        if(list[i]==num):
          return "found"
        
    return -1
list=[1,2,3,4,5,6]
num=4
result=Linear_search(list,num)
print(result)

