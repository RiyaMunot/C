/*WRITE INFO INTO FILE AND READ FROM FILE CHAR BY CHAR*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("F:/programs/abc.txt","w");
    printf("enter your info and enter '*' at the end");
    do
    {
        scanf("%c",&ch);
        if(ch=='*')
        break;
        fputc(ch,fp);
    }while(1);
    fclose(fp);
    fp=fopen("F:/programs/abc.txt","r");
    if(fp==NULL)
    {
            printf("file does not exist");
            exit(0);
        }
        do{
            ch=fgetc(fp);
            printf("%c",ch);
        }while(!feof(fp));
        fclose(fp);
    }
