#include<stdio.h>
#define max 100
int main()
{
    char str[max];
    int i=0,words=1;
    printf("Enter any string:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }
        i++;
    }
    printf("total number of words:%d",words);
    return 0;
}