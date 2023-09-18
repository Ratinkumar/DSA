//Q12
/*NAME: RATIN KUMAR
  ROLL NO.: 48
  SEC : O
*/
#include<stdio.h>
typedef struct Date
{
    int dd;
    int mm;
    int yy;
}date;
typedef struct Student
{
    char name[30];
    int roll_no;
    date DOB;
    date DOA;
}STD;
int main()
{
    STD std[30];
    int n,i;
    printf("enter the number of students:\n");
    scanf("%d",&n);
    printf("enter the respective details of a student :\n\n");
    for(i=0;i<n;i++)
    {
        printf("enter the name of %d student:  ",i+1);
        scanf("%s",std[i].name);
        printf("enter the roll no:  ");
        scanf("%d",&std[i].roll_no);
        printf("\nenter Date of birth\n");
        printf("\nenter day:  ");
        scanf("%d",&std[i].DOB.dd);
        printf("enter month:  ");
        scanf("%d",&std[i].DOB.mm);
        printf("enter year:  ");
        scanf("%d",&std[i].DOB.yy);

        printf("\nenter Date of admission\n");
        printf("\nenter day:  ");
        scanf("%d",&std[i].DOA.dd);
        printf("enter month:  ");
        scanf("%d",&std[i].DOA.mm);
        printf("enter year:  ");
        scanf("%d",&std[i].DOA.yy);
        
        printf("\n\n");

    }
    printf("Details of the students are: \n\n");
    for(i=0;i<n;i++)
    {
        printf("\nName of %d student :\n%s",i+1,std[i].name);
        printf("\nroll no of the student:\n%d",std[i].roll_no);
        printf("\nDate of birth :\n %d-%d-%d",std[i].DOB.dd,std[i].DOB.mm,std[i].DOB.yy);
        printf("\nDate of admission :\n %d-%d-%d",std[i].DOA.dd,std[i].DOA.mm,std[i].DOA.yy);

        printf("\n\n");
    }
    return 0;
}