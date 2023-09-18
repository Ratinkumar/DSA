#include<stdio.h>
int main()
{
    char ch;
    int Acount=0,Ecount=0,Icount=0,Ocount=0,Ucount=0;
    printf("Enter a Sentence:- \n");
    do
    {
        scanf("%c",&ch);
        if(ch=='A' || ch=='a')
        Acount++;
        if(ch=='E' || ch=='e')
        Ecount++;
        if(ch=='I' || ch=='i')
        Icount++;
        if(ch=='O' || ch=='o')
        Ocount++;
        if(ch=='U' || ch=='u')
        Ucount++;
    } while (ch!=45);
    printf("\n Count of A=%d",Acount);
    printf("\n Count of E=%d",Ecount);
    printf("\n Count of I=%d",Icount);
    printf("\n Count of O=%d",Ocount);
    printf("\n Count of U=%d",Ucount);
    return 0;
}