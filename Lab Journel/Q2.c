//Q2
/*NAME : RATIN KUMAR
  ROLL NO.: 48
  SEC : O
*/
#include<stdio.h>
#define max 50
int main()
{
    int arr1[max],arr2[max],arr3[max],m,n,i,k=0,j,temp;
    printf("enter the total elements of first array: ");
    scanf("%d",&n);
    printf("enter the elemets of first array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the total elements of second array: ");
    scanf("%d",&m);
    printf("enter the elemets of second array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        arr3[k]=arr1[i];
        k++;
    }
    for(i=0;i<m;i++)
    {
        arr3[k]=arr2[i];
        k++;
    }
    
    for(i=0;i<k;i++)
    {
        for(j=0;j<k-1;j++)
        {
            if(arr3[j]>arr3[j+1])
            {
                temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }

        }
    }

    printf("\nFinal sorted array is :");
    for(i=0;i<k;i++)
    {
      printf("  %d",arr3[i]);
    }
   return 0;
}