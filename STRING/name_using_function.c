#include<stdio.h>

void printString(char arr[]);

int main ()
{
    char firstname[]="Ratin";
    char secondname[]="Pandey";

    printString(firstname);
    printString(secondname);
    return 0;

}
void printString(char arr[])
{
    for(int i=0;arr[i] != '\0' ;i++) //important line learn it....
    {
    printf("%c",arr[i]);
    }
    printf("\n");
}    
