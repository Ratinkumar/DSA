# Q15
''' NAME : RATIN KUMAR
    ROLL NO. : 48
    SEC : 0 
'''    

list = (12,20,31,41,'a','ram',5,'z','c')

print("Initial List",str(list))

res=0
for i in list:
    p=str(type(i))
    if(p.find('int')!=-1):
        res+=int(i)
print ("Sum of Integers present in list = ", res)