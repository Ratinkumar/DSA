#include<stdio.h>
#include<string.h>
void reverseStr(char str[],char **rev);
int main()
{
    char str[100],str1[100];
    char *rev=str1;
    printf("Enter any string:");
    gets(str);

    reverseStr(str,&rev);
    printf("%s",str1);

    if(strcmp(str,str1)==0)
    {
        printf("\nPallindrome");
    }
    else
    printf("\nNot Pallindrome");

    return 0;
    
}
void reverseStr(char str[],char **rev)
{
    char *ptr1,*ptr2;
    ptr1=str;
    ptr2=ptr1+strlen(str)-1;
    while(ptr2>=ptr1)
    {
        **rev=*ptr2;
        (*rev)++;
        ptr2--;
    }
    **rev = '\0';
}