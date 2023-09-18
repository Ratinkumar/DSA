#include<stdio.h>

void extract(char str[],char **ptr, int set, int end);
int main()
{
    char str[200], sub[100];
    int set , end;
    char *ptr=sub;

    printf("enter the string:\n");
    scanf("%[^\n]s",str);

    printf("\n enter the starting point for substraction:\n");
    scanf("%d",&set);

    printf("\nenter the number of elements to extract from starting point:\n");
    scanf("%d",&end);

    extract(str,&ptr,set,end);
    
    printf("\nextracted string :\n");
    printf("%s",sub);

    return 0;

}
void extract(char str[],char **ptr,int set , int end)
{
    int i=0;
    
    while(str[i]!='\0')
    {
          if((i>=(set-1))&&(i<=(set+end-1)))
           { **ptr=str[i];
            (*ptr)++;
           }
        
        i++;
    }
    **ptr='\0';
}