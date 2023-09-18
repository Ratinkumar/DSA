#include<stdio.h>
int main()
{
    int marks[3];

    int phy,chem,math;
    printf("Enter Phy Marks:");
    scanf("%d",&marks[0]);

    printf("Enter Chem Marks:");
    scanf("%d",&marks[1]);

    printf("Enter Math Marks:");
    scanf("%d",&marks[2]);

    printf("Phy=%d, chem=%d, Math=%d",marks[0],marks[1],marks[2]);
    return 0;

}
