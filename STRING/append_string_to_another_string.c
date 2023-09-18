#include<stdio.h>
#define max 100
int main()
{
    char source[max],dest[max];
    int i=0,j=0;
    printf("\nEnter the source string:");
    gets(source);
    printf("\nEnter the destinstion string:");
    gets(dest);
    while(dest[i]!='\0')
    i++;
    while(source[j]!='\0')
    {
        dest[i]=source[j];
        i++;
        j++;
    }
    dest[i]='\0';
    printf("\nAfter appending: %s",dest);
    return 0;
}