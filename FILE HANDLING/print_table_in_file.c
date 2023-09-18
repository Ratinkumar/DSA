#include<stdio.h>
int main()
{
    FILE *fp;
    int num;
    printf("Enter the number for table you want:\n");
    scanf("%d",&num);
    fp=fopen("table.txt","w");
    for(int i=0;i<10;i++)
    {
    fprintf(fp,"%d X %d = %d\n",num, i+1, num*(i+1));
    }
    fclose(fp);
    printf("The table of %d has been successfully created in table.txt\n",num);
    return 0;
}