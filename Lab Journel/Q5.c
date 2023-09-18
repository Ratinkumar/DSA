//Q5
/* NAME : RATIN KUMAR
   ROLL NO.: 48
   SEC : O
*/   
#include <stdio.h>
#include <string.h>
void concatstr(char str1[], char str2[])
{

    strcat(str1, str2);
}

int main()
{
    char str1[100], str2[100];
    printf("\nEnter the string 1 : \n");
    gets(str1);
    printf("\nEnter the string 2 : \n");
    gets(str2);
    concatstr(str1, str2);
    printf("\nConcatenated STRING : %s", str1);
    printf("\n\n");
    return 0;
}