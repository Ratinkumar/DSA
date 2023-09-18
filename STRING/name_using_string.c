#include<stdio.h>
int main()
{
    char name[20];
    fgets(name,20,stdin); //gets(name) is not used here becaue it is dangerous and outdated.This function is removed from version C11.
    puts(name);
    return 0;
}