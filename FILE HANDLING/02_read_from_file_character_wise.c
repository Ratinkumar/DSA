#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("sample2.txt","r");
    if(fp==NULL)
    {
        printf("File does not created.");
    }
    do
    {
        ch=fgetc(fp);
        putchar(ch);
    }while(ch!=EOF);
    fclose(fp);
    return 0;
}