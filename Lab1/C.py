st1, st2 = input().split()
def string(s):
    st = str()
    for i in s:
        if i == '#':
            st = st[:len(st)-1]
        else :
            st += i    
    return st
if string(st1) == string(st2) :
    print("YES") 
else :
    print("NO")              