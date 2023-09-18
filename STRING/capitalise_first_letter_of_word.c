#include<stdio.h>
#define max 100
int main()
{
    char str[max];
    int i=0;
    printf("Enter the string:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(i==0)
        {
            if((str[i]>='a' && str[i]<='z'))
            str[i] = str[i] - 32;
            continue;
        }
        if(str[i]==' ')
        {
            ++i;
            if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
            continue;
        }
        else
        {
            if(str[i]>='A' && str[i] <='Z')
            str[i]=str[i]+32;
        }
    }
    printf("capitalised string is : %s\n",str);
    return 0;
}