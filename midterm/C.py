import heapq

n=int(input())
cur=int()

arr = list(map(int,input().split()))
arr = [-x for x in arr]

for i in range(int(input())):
    a, b = map(int,input().split())
    cur = arr[a-1]-b
    arr[a-1]-=b
    heapq.heapify(arr)
    print(arr.index(cur)+1)

for i in arr:
    print(-i, end=' ')
