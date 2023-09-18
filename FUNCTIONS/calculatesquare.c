#include<stdio.h>
#include<math.h>

int SquareNumber(int num);

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    int Square=SquareNumber(num);
    printf("Square of a number is:%d",Square);
}
int SquareNumber(int num)
{
    return num*num;
}