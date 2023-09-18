s1=input('Enter a string:')
s2=''
l=len(s1)-1
for i in range(l,-1,-1):
    s2=s2+s1
    if(s2==s1):
        print("Pallindrom")
    else:
        print("Not a Pallindrom")    