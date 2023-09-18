#include<stdio.h>
#define maxsize 100
int main()
{
    int arr[maxsize],n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("\t %d",arr[i]);
    }
    return 0;
}