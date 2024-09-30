/*WRITE INFO INTO FILE AND READ FROM FILE LINE BY LINE*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[50];
    fp=fopen("F:/programs/xyz.txt","w");
    printf("Enter your info and 'stop' at the end");
    do
    {
       gets(str);
       if(strcmp(str,"stop")==0)
       break;

       fputs(str,fp);
    } while (1);
    fclose(fp);
    fp=fopen("F:/programs/xyz.txt","r");
    if(fp==NULL)
    {
        printf("File does not exist");
        exit(0);
    }
    do{
        fgets(str,20,fp);
        printf("%s\n",str);
     }while(!feof(fp));
     fclose(fp);
     
    
}