#factorial with recursion
#Name: Sagar Dam (DNAP)

from timeit import *

mysetup = '''n = int(input("Enter the same no. to calculate the time: "))'''

def fact(n):
    if n==1:
        return 1
    else:
        return n*fact(n-1)

mycode = '''
def fact(n):
    if n==1:
        return 1
    else:
        return n*fact(n-1)'''

n=int(input("Enter the no:   "))
x=fact(n)
print("The factorial:  ",x)
print(timeit(stmt = mycode, setup = mysetup, number = 10000)/10000)


# After running this code is taking least time for calculating 200!
