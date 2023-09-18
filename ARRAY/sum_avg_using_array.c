#include<stdio.h>
int main()
{
    int  num[50],sum=0,N,i;
    float avg;
    printf("Enter the value:\n");
    scanf("%d",&N);
    printf("Enter the elements:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<N;i++)
    {
        sum=sum+num[i];
        avg=sum/N;
    }
    printf("Total Sum is:%d \n",sum);
    printf("Average is:%0.2f",avg);
    return 0;
}