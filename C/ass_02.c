#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    char str[max];
    int i,len,lwrcnt=0,uprcnt=0;
    printf("Enter a string:");
    gets(str);
    len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            lwrcnt++;
        }
        if(str[i]>='A' && str[i]<='Z')
        {
            uprcnt++;
        }
    }
    printf("\nTotal lowercase is = %d",lwrcnt);
    printf("\nTotal uppercase is = %d",uprcnt);
    return 0;
}