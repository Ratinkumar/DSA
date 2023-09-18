#include<stdio.h>

void checkChar(char str[],char ch);

int main()
{
    char str[]="Ratin pandey";
    char ch ='t';
    checkChar(str,ch);
}

void checkChar(char str[],char ch)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("Character is present !");
            return;
        }
    }
    printf("Character is not present !");

}