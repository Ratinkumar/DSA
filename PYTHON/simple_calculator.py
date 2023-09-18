def add(x,y):
    return x+y
def subtract(x,y):
    return x-y
def multiply(x,y):
    return x*y
def divide(x,y):
    return x/y 
print("Select operation !")
print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")

while True:
    choice=input("Enter choice(1/2/3/4):")
    if choice in ('1','2','3','4'):
        n1 = float(input("Enter the first number:"))
        n2 = float(input("Enter the second number:"))
        if choice == '1':
            print("Addition of ",n1,"+",n2,"=",add(n1,n2))
        elif choice == '2':
            print("Subtraction of ",n1,"-",n2,"=",subtract(n1,n2))
        elif choice == '3':
            print("Multiplication of ",n1,"*",n2,"=",multiply(n1,n2))
        elif choice == '4':
            print("Division of ",n1,"/",n2,"=",divide(n1,n2))

        next_calculation = input("Let's do next calculation ? (yes/no):")
        if next_calculation == "no":
            print("Thanks for using, Happy to Help :)")
            break
        else:
            print("OK:)")
