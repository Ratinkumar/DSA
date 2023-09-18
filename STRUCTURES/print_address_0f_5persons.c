// design a structure to print house no.,block,city,state of 5 persons.........

#include<stdio.h>

struct Address
{
    int HouseNo ;
    int Block;
    char City[100];
    char State[100];
};

void printAdd(struct Address add);

int main()
{
    struct Address adds[5];

    printf("Enter the info of 1 person:");
    scanf("%d",&adds[0].HouseNo);
    scanf("%d",&adds[0].Block);
    scanf("%s",&adds[0].City);
    scanf("%s",&adds[0].State);

    printf("Enter the info of 2 person:");
    scanf("%d",&adds[1].HouseNo);
    scanf("%d",&adds[1].Block);
    scanf("%s",&adds[1].City);
    scanf("%s",&adds[1].State);

    printf("Enter the info of 3 person:");
    scanf("%d",&adds[2].HouseNo);
    scanf("%d",&adds[2].Block);
    scanf("%s",&adds[2].City);
    scanf("%s",&adds[2].State);

    printf("Enter the info of 4 person:");
    scanf("%d",&adds[3].HouseNo);
    scanf("%d",&adds[3].Block);
    scanf("%s",&adds[3].City);
    scanf("%s",&adds[3].State);

    printf("Enter the info of 5 person:");
    scanf("%d",&adds[4].HouseNo);
    scanf("%d",&adds[4].Block);
    scanf("%s",&adds[4].City);
    scanf("%s",&adds[4].State);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}

void printAdd(struct Address add)
{
    printf("Address is :%d, %d, %s, %s\n",add.HouseNo,add.Block,add.City,add.State);
}