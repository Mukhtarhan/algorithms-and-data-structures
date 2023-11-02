import sys

def isprime(a):
    for i in range(2,a):
        if a%i==0:
            return False
    return True
n = int(input())
if n==4:
    print(2, 2)
    sys.exit()
i = 3
j = n - 3
while True:
    if isprime(i) and isprime(j) and i+j==n:
        print(i, j)
        sys.exit()
    i+=2
    j-=2
    continue
       
