#include<stdio.h>
#define MAXSIZE 100
int main()
{
    int num[MAXSIZE],i,N,greater,smaller,equal;
    printf("Enter the size of the array:");
    scanf("%d",&N);
    printf("Enter the NUmbers:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    greater=0;
    smaller=0;
    equal=0;
    for(i=0;i<N;i++)
    {
        if(num[i]>N)
        {
            greater++;
        }
        if(num[i]<N)
        {
            smaller++;
        }
        if(num[i]==N)
        {
            equal++;
        }
    }
    printf("Total greater number is:%d \n",greater);
    printf("Total smaller number is:%d \n",smaller);
    printf("Total equal number is:%d",equal);
    return 0;
}
