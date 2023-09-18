#include<stdio.h>
#define max 100

int main()
{
    char str[max];
    int i=0,alphabets=0,digits=0,spclchar=0;
    printf("Enter any string:");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            spclchar++;
        }
        i++;
    }
    printf("\nTotal number of Alphabets:%d",alphabets);
    printf("\nTotal number of Digits:%d",digits);
    printf("\nTotal number of special charcters:%d",spclchar);
    return 0;

}