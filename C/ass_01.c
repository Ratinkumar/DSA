#include<stdio.h>
#define max 100
int main()
{
    int arr[max],arr7[max],arr11[max];
    int i,j=0,k=0,N;
    printf("Enter the size of array:");
    scanf("%d",&N);
    printf("Enter the elements in array:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]%7==0)
        {
            arr7[j]=arr[i];
            j++;
        }
        if(arr[i]%11==0)
        {
            arr11[k]=arr[i];
            k++;
        }
    }
    printf("\nMultiple of 7 is :\n");
    for(i=0;i<j;i++)
    {
        printf("%d\t",arr7[i]);
    }
    printf("\nMultiple of 11 is :\n");
    for(i=0;i<k;i++)
    {
        printf("%d\t",arr11[i]);
    }
    return 0;
}