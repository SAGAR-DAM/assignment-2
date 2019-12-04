# Factorial programme
# Name: Sagar Dam;  Dept: DNAP
from scipy.misc import *
from timeit import *

mysetup = '''n = int(input("Enter the same no. to calculate the time: "))'''

n=int(input("Enter the number:  "))
x=factorial(n,exact=True)
print("The factorial:  ",x)

mycode='''
from scipy.misc import factorial
factorial(n,exact=True)'''

print(timeit(stmt = mycode, setup = mysetup, number = 10000)/10000)