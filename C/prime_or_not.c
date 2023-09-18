#include<stdio.h>
int PrimeOrNot(int);
int main()
{
    int n,prime;
    printf("Enter the positive number:");
    scanf("%d",&n);
    prime=PrimeOrNot(n);
    if (prime==1)
    printf("It is a prime number:");
    else
    printf("It is not a prime number:");
    return 0;
}
int PrimeOrNot(int n1)
{
    int i;
    for(i=2;i<=n1/2;i++)
    {
        if(n1%i==0)
        return 0;
    }
    return 1;
}