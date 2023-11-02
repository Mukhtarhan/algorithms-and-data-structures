def binarysearch(arr,target):
    top = int
    mid = int 
    bot = int
    top=len(arr)-1
    bot=0
    while bot<=top:
        mid = int((top+bot)/2)
        if top==bot:
            return mid
        if arr[mid]==target:
            return mid
        elif arr[mid]>target:
            top=mid-1
        else:
            bot=mid+1  
        
def check(arr,n):
    sum=0
    for i in range(n+1):
        sum+=arr[i]
    print(n+1,sum)
    return


n = int(input())
lis = list(map(int,input().split()))
lis.sort()
b = int(input())
summ=0
for i in range(b):
    c = int(input())
    for j in range(len(lis)):
        if c==lis[j]:
            print(j+1,summ+lis[j])
            break
        elif c<lis[j]:
            print(j,summ)
            break  
        summ+=j      
    # check(lis,binarysearch(lis,c))
    
