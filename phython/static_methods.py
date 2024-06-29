# class Student:
#     def __init__(self) -> None:
#          pass
# @staticmethod
# def get_name():
#   print("hello")
# s1=Student()
# s1.get_name()

class Account:
    def __init__(self,acc_no, acc_pass):
        # __->private acc_no 
        self.__acc_no=acc_no 
        self.__acc_pass=acc_pass

acc1=Account("12345","abcde")
print(acc1.__acc_no)
