//Q6
/* NAME : RATIN KUMAR
   ROLL NO.: 48
   SEC : O
*/
#include <stdio.h>
#include <string.h>
int comp(char str1[], char str2[])
{
    if (strcmp(str1, str2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char str1[100], str2[100];
    
    printf("Enter a String-1 : ");
    gets(str1);

    printf("Enter a String-2 : ");
    gets(str2);

    comp(str1, str2);

    if (comp(str1, str2) == 1)

        printf("both are equal");
    else
        printf("not equal");
}