def isprime(x): 
    if x==1 :
        return False
    if x==2 :
        return True
    for i in range(2,x):
        if x%i==0:
            return False
    return True 
a=int(input()) 

list = [2]

list2 = []
prime=3
while len(list2)!=a:
    
    if isprime(prime) :
        list.append(prime)
        if isprime(len(list)):
            list2.append(prime)
    prime=prime+2
print(list2[a-1])        