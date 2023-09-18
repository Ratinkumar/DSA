#include<stdio.h>
int sum(int a,int b);

int main()
{
    int a,b;
    printf("Enter the first value:");
    scanf("%d",&a);
    printf("Enter the second value:");
    scanf("%d",&b);

  int s=sum (a, b);
    printf("sum is : %d \n",s);
    return 0;

}
int sum(int a,int b)
{
    return a+b;
}