#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {
            flag=1;
            break;
        }
    }
    {
        if(flag==0)
        printf("Prime");
        else
        printf("Not Prime");
    }
    return 0;
}