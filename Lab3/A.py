def linearsearch(arr, target):
    for i in arr:
        for j in i:
            if(j==target):
                print(arr.index(i), i.index(j),end="\n")
                return
    print("-1")
    return 
t=int(input())
list1=list(map(int,input().split()))

n, m = map(int,input().split())
list2=[]
for i in range(n):
    list2.append(list(map(int,input().split())))

for i in list1:
    linearsearch(list2, i)