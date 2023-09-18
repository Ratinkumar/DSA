str="4444 4444 4444"
strlength=len(str)
masked = strlength - 4
str2 = str[masked:]
print( "*" *masked + str2)