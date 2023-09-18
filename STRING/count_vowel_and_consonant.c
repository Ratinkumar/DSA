#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    char str[max];
    int i=0,vowel=0,consonant=0,len=0;
    printf("Enter any string:");
    gets(str);
    len=strlen(str);

    for(i=0;i<len;i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i] <='Z'))
        {
            switch(str[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                vowel++;
                break;
                default : consonant++;
            }
        }
    }
    printf("Total vowel:%d",vowel);
    printf("\nTotal consonant:%d",consonant);
    return 0;

}