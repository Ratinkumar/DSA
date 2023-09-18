#include<stdio.h>

void PrintTable(int n);

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    
    PrintTable(n);
    return 0;
}
void PrintTable(int n)
{
    for(int i=1;i<=10;i++)
    printf("%d\n",i*n);

}
