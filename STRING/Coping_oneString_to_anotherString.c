#include<stdio.h>
#define Max 100
int main()
{
    char text1[Max];
    char text2[Max];
    int i;

    printf("Enter a string:");
    gets(text1);

    for(i=0;text1[i]!='\0';i++)
    {
        text2[i]=text1[i];
    }
    text2[i]='\0';

    printf("Copied String = %s",text2);
    return 0;

}