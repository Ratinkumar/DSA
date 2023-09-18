#include<stdio.h>
#define max 3
int main()
{
    int mat[max][max];
    int i,j,sum1=0,sum2=0;
    printf("Enter the elements in matrix of size %dx%d:\n",max ,max);
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<max;i++)
    {
        sum1=sum1+mat[i][i];
    }
    printf("\nSum of main diadonal elements = %d",sum1);
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            if(i+j == ((max+1)-2))
            {
                sum2=sum2+mat[i][j];
            }
        }
    }
    printf("\nSum of secondary diagonal elements = %d",sum2);
    return 0;
}