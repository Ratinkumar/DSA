//Q10
/* NAME: RATIN KUMAR
   ROLL NO.: 48
   SEC : O
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200],str1[200];

    char *ptr1, *ptr2,*ptr3,*ptr4;
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    ptr1= str;
    ptr3= str1;
    ptr2= ptr1+ strlen(str)-1;

    while(ptr2>=ptr1)
    {
       *ptr3= *ptr2;
       ptr2--;
       ptr3++;
    }
    *ptr3='\0';
    
    ptr4= str1;
    printf("Reverse string:\n");
    while(*ptr4!='\0')
    {
        printf("%c",*ptr4);
        ptr4++;
    }

    return 0;
}