# f=open("demo.txt","a")
# f.write("I am fine")
# f.close()

f=open("demo.txt","w")
f.write("i am fine")
f.close()
f=open("demo.txt","r")
data=f.read()
print(data)

f.close()

