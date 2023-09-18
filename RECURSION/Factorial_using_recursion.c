#include<stdio.h>
#include<stdlib.h>
int fact(int N);
int main()
{
    int N,factorial;
    printf("\n Enter the number :");
    scanf("%d",&N);
    factorial=fact(N);
    printf("\n The factorial of N is : %d",factorial);
    return 0;
}
int fact(int N)
{
    if(N==0)
    return 1;
    else
    return (N*fact(N-1));
}