//Q4
/* NAME : RATIN KUMAR
   ROLL NO.: 48
   SEC : O
*/   
#include <stdio.h>
int main()
{
    int mat[30][30], i, j, m, n;
    printf("No. of rows (m) : ");
    scanf("%d", &m);

    printf("No. of columns (n) : ");
    scanf("%d", &n);

    printf("\nEnter the Elements : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nUpper-triangular matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j < i)
            {
                mat[i][j] = 0;
            }
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}