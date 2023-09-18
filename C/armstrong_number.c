#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0,r,n;
    printf("Enter the number:");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        r=n%10;
        sum+=pow(r,3);
        n=n/10;
    }
    if(sum==num)
    printf("\n %d is an Armstrong number",num);
    else
    printf("\n %d is not an armstong number",num);
    return 0;
}

