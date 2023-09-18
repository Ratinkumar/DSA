#include<stdio.h>
#include<ctype.h>

int cnt_space(int i,int count,char ch);

int main()
{
    char ch;
    int i=0,count=0;
    count=cnt_space(i,count,ch);
    printf("\nTotal number of space = %d",count);
    return 0;
}
int cnt_space(int i,int count,char ch)
{
    char buf[50]="graphic era hill university";
    ch = buf[0];
    while(ch != '\0')
    {
        ch=buf[i];
        if(isspace(ch))
        count++;
        i++;
    }
    return (count);
}