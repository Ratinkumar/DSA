//Q11
/*NAME : RATIN KUMAR
  ROLL NO.: 48
  SEC : O
*/
#include<stdio.h>
typedef struct employee
{
     char empcode[30];
     char  name[25];
     int  sales;
} EMP;
int main()
{
    EMP emp[30];
    int n,i,sum=0;
    float avg;
    printf("enter the number of employees:\n");
    scanf("%d",&n);
    printf("enter the respective details of each employee:\n\n");
    for(i=0;i<n;i++)
    {
        printf("enter the empcode of %d employee:  ",i+1);
        scanf("%s",emp[i].empcode);
        printf("enter the name of the employee:  ");
        scanf("%s",emp[i].name);
        printf("enter the sales done by the employee:  ");
        scanf("%d",&emp[i].sales);

        printf("\n\n");
    }
    for(i=0;i<n;i++)
    {
       sum= sum+ emp[i].sales;
    }
    avg =(float)sum/n;

    printf("\ntotal sales done :\n%d",sum);
    printf("\naverage sales done :\n%0.2f",avg);
    return 0;
}