#include<stdio.h>
#define max 100
int main()
{
    char str[max];
    char *s=str;
    printf("Enter any string:");
    gets(str);

    while(*s)
    {
        *s=(*s>='a' && *s<='z')? *s-32 : *s;
        s++;
    }
    printf("Uppercase string is : %s",str);
    return 0;
}