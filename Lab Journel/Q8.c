//Q8
/* NAME : RATIN KUMAR
   ROLL NO.: 48
   SEC : O
*/   
#include <stdio.h>
void swap(int *a, int *b)
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("After swaping : \n'a' = %d\n'b' = %d\n\n", *a, *b);
}
int main()
{
    int a, b;
    printf("\nEnter 'a' : ");
    scanf("%d", &a);
    printf("\nEnter 'b' : ");
    scanf("%d", &b);

    swap(&a, &b);

    return 0;
}