#include<stdio.h>
#define MAXSIZE 100
int main()
{
    int num[MAXSIZE],i,j,N,temp;
    printf("Enter the value of N:");
    scanf("%d",&N);
    printf("Enter the elements:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<N;i++)
    for(j=0;j<N;j++)
    {
        if (num[j] > num[j+1])
        {
            temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
        }
    }
        printf("Sorted Array is:\n");
        for(i=0;i<N;i++)
        printf("%d \t",num[i]);
        return 0;
}