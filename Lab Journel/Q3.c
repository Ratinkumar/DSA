//Q3.
/* NAME : RATIN KUMAR
   ROLL NO.: 48
   SEC : O
*/   
#include <stdio.h>
int main()
{
    int arr[30][30], tarr[30][30], i, j, m, n;
    printf("\nEnter the number of ROWS m = ");
    scanf("%d", &m);

    printf("\nEnter the number of COLUMNS n = ");
    scanf("%d", &n);

    printf("\nEnter the Elements : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            tarr[i][j] = arr[j][i];
        }
    }
    printf("\nTranspose of matrix : \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", tarr[i][j]);
        }
        printf("\n");
    }

    return 0;
}