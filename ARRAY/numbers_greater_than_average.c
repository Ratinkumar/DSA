#include<stdio.h>
#define max 100
int main()
{
    int arr[max],i,n,sum,count=0;
    float avg;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("\nEnter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=(float)sum / n ;
    printf("\nAverage is:%0.2f",avg);
    for(i=0;i<n;i++)
    {
        if (arr[i]>avg)
        {
            printf("\n%d is greater than average",arr[i]);
            count++;
        }
    }
    printf("\nTotal elements greater than average are:%d",count);
    return 0;
}