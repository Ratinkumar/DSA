#include<stdio.h>
#include<stdlib.h>
#define max 100
int main()
{
    char str[max];
    FILE *fptr=fopen("sample.txt","w+");
    if(fptr==NULL)
    {
        printf("Error! File opening...");
        exit;
    }
    printf("Enter contents to store in file:\n");
    fgets(str,max,stdin);
    fputs(str,fptr);
    fclose(fptr);
    printf("File created and saved succesfully. :)\n");
    return 0;
}