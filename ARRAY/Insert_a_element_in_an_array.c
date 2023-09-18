#include<stdio.h>
#define maxsize 100
int main()
{
    int arr[maxsize],n,i,pos,num;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the new element:");
    scanf("%d",&num);
    printf("Enter the position:");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    n++;
    for(i=0;i<n;i++)
    {
        printf("\t %d",arr[i]);
    }
    return 0;
}