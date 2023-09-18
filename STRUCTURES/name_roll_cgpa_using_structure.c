#include<stdio.h>
#include<string.h>

struct student
{
    char Name[20];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1;
    s1.roll = 1212;
    s1.cgpa = 8.8;
    strcpy(s1.Name,"Ratin Kumar");

    printf("Name :%s\n",s1.Name);
    printf("Roll No. %d\n:",s1.roll);
    printf("CGPA :%0.2f\n",s1.cgpa);

    return 0;
}