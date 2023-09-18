#include<stdio.h>

int countVowels(char str[]);

int main ()
{
    char str[]="Ratin pandey";
    printf("Vowels are :%d",countVowels(str));

}

int countVowels(char str[])
{
    int i, count=0;

    for(i=0;str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i]== 'i' || str[i] == 'o' || str[i] == 'u')
    {
    count++;
    }
    }
    return count;
}