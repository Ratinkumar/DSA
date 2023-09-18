//Q9
/*NAME : RATIN KUMAR
  ROLL NO.: 48
  SEC : O
*/
#include<stdio.h>
#include<math.h>
#define max 50
int main()
{
   int arr[max],n,i,sum=0;
   int *ptr=arr;
   float avg,dev,nsum=0.0;
   printf("enter n:");
   scanf("%d",&n);
   printf("ENTER THE ELEMENTS:\n");
       for(i=0;i<n;i++)
       {
           scanf("%d",(ptr+i));
           sum= sum+ *(ptr+i);
       }
       avg=(float)sum/n;
       for(i=0;i<n;i++)
       {
           nsum=nsum+(pow((*(ptr+i)-avg),2));
       }
       dev=sqrt(nsum/n);
       printf("Standard deviation is %0.4f",dev);
       return 0;
    
}