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


prime=3
while len(list)!=a:
    
    if isprime(prime) :
        list.append(prime)
    
    prime=prime+2
print(list[a-1])   