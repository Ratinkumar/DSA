/* NAME : RATIN KUMAR
   SEC  : O
   ROLL NO. : 48
*/
#include <stdio.h>
void number(int n)
{
    int arr[30], g_count = 0, s_count = 0, e_count = 0, i, j = 0, m = 0, k;

    printf("\nEnter the Elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the value of k : ");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        if (k > arr[i])
        {
            g_count++;
        }
        else if (k < arr[i])
        {
            s_count++;
        }
        else if (k = arr[i])
        {
            e_count++;
        }
    }
    printf("\nNumber greater than %d : %d", k, g_count);
    printf("\nNumber smaller than %d : %d", k, s_count);
    printf("\nNumber equal than %d : %d\n\n", k, e_count);
}

int main()
{
    int n;
    printf("\nEnter the value of n :");
    scanf("%d", &n);
    number(n);
    return 0;
}