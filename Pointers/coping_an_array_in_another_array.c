#include<stdio.h>
#define max 100

void printArr(int *arr,int n);

int main()
{
    int arr1[max],arr2[max];
    int n,i;

    int *ptr1=arr1;
    int *ptr2=arr2;
    int *last_arr=arr1;

    printf("Enter the size of an array:");
    scanf("%d",&n);

    printf("Enter the elements the of array:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",ptr1+i);
    }
    while(ptr1 <= last_arr)
    {
        *ptr2=*ptr1;
        *ptr1++;
        *ptr2++;
    }
    printf("\narr1 elements after coping:");
    printArr(arr1,n);
    
    printf("\narr2 elements after coping:");
    printArr(arr2,n);
}
void printArr(int *arr,int n)
{
    int i;
    for(i=0;i<=n;i++);
    {
        printf("%d",*(arr+i));
    }
}