#include<stdio.h>
#define MAXSIZE 100
int main()
{
    int num[MAXSIZE],N,i,even,odd;
    printf("Enter the value:");
    scanf("%d",&N);
    printf("Enter the numbers:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    even=0;
    odd=0;
    for(i=0;i<N;i++)
    {
        if (num[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
        printf("Total Even Number is:%d\n",even);
        printf("Total Odd Number is:%d",odd);
        return 0;
}