# Factorial programme
# Name: Sagar Dam;  Dept: DNAP

mysetup = '''n = int(input("Enter the same no. to calculate the time: "))'''

n=int(input("Enter the number:   "))
x=1
for i in range(1,n+1):
    x=x*i
print("The factorial value:  ",x)

mycode = '''
x=1
for i in range(1,n+1):
    x=x*i'''

print(timeit(stmt = mycode, setup = mysetup, number = 10000)/10000)