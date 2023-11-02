def Winner(bor, nur, cnt):
    
    if cnt==1000000 :
        return "blin nichiya"
    if bor[0]==0 and nur[0]==9:
        bor.append(bor[0]) 
        bor.append(nur[0])
        bor.pop(0)
        nur.pop(0)  
        
        if  len(nur)<1:
            return "Boris"+" "+str(cnt)
        return Winner(bor, nur, cnt+1) 
    if bor[0]==9 and nur[0]==0:
        nur.append(bor[0]) 
        nur.append(nur[0])
        bor.pop(0)
        nur.pop(0)
        
        if len(bor)< 1:
           return "Nursik"+" "+str(cnt)
        return Winner(bor, nur, cnt+1)
    if bor[0]>nur[0] :
        bor.append(bor[0]) 
        bor.append(nur[0])
        bor.pop(0)
        nur.pop(0)  
        
        if len(nur)<1:
            return "Boris"+" "+str(cnt)
        return Winner(bor, nur, cnt+1) 
    else:
        nur.append(bor[0]) 
        nur.append(nur[0])
        bor.pop(0)
        nur.pop(0)
       
        if  len(bor)<1 :
            return "Nursik"+" "+str(cnt)
        return Winner(bor, nur, cnt+1)

bor=list(map(int,input().split()))
nur=list(map(int,input().split()))

print(Winner(bor, nur, 1) )


