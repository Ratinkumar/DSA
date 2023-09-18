//Q13
/*NAME : RATIN KUMAR
  ROLL NO.: 48
  SEC : O 
*/
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char str[1000],ch;
    int vowel=0, conso=0;
    FILE *fp=fopen("Para.txt","w+");
    if(fp==NULL)
    {
        printf("file not created!");
        exit(0);
    }
    printf("enter the text:\n");
    gets(str);

   fprintf(fp,"%s",str);
   fclose(fp);

    fp=fopen("Para.txt","r");
    printf("\n\nThe text is:\n\n ");
    while(1)
    {
      ch=fgetc(fp);
      printf("%c",ch);
      if(ch==-1)
      {
        break;
      }
      if(isalpha(ch)!=0)
      {
        switch(tolower(ch))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': vowel++;
                      break;
            default : conso++;
                      break;
        }
      }
      
    }
    fclose(fp);

    printf("\n number of vowels are %d",vowel);
    printf("\n number of consonants are %d",conso);
    return 0;

}