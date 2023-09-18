#include<stdio.h>
#define max 50
int main()
{
    int num[max],n,sum=0,i;
    float mean,dev;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    mean=(float)sum/n;
    for(i=0;i<n;i++)
    {
        sum=num[i]-mean;
        dev=sum*sum;
    }
    printf("\n Standard Deviation is:%0.2f",dev);
    return 0;
}