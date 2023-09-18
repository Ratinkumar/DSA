#include<stdio.h>
#define max 100

void toogle(char *str);

int main()
{
    char str[max];
    printf("Enter any string:");
    gets(str);
    
    toogle(str);
    
    printf("Toogled string: %s ",str);
    
    return 0;
    
}
void toogle(char *str)
{
    int i=0;
    while(str[i]!=0)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;
    }
}