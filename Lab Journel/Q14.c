//Q14
/*NAME : RATIN KUMAR
  ROLL NO.: 48
  SEC : O
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
     char str[1000],ch;
     FILE *fp1,*fp2;
     fp1= fopen("Sample.txt","w+");
     if (fp1==NULL)
     {
        printf("file not created!");
        exit (0);
     }
     printf("enter the text:\n");
     gets(str);

     fprintf(fp1,"%s",str);
     fclose(fp1);

     fp1=fopen("Sample.txt","r+");
     fp2=fopen("copy.txt","w+");

     while(1)
     {
        ch= fgetc(fp1);
        if(ch==-1)
        {
            break;
        }
        if(ch!=' ')
        {
            fprintf(fp2,"%c",ch);
        }   
     }
     fclose(fp1);
     fclose(fp2);

     fp2 =fopen("copy.txt","r");

     printf("\nCopied Text Without spaces :\n\n");

     while(1)
     {
        ch= fgetc(fp2);
        if(ch==-1)
        {
            break;
        }
        printf("%c",ch);
     }
     fclose(fp2);

     return 0;
}