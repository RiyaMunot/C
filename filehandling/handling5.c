/*copy contents of one file into another file*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("F:/programs/abc.txt","r");
    fp2=fopen("F:/programs/xyz.txt","w+");
    if(fp1==NULL)
    {
        printf("file does not exist");
        exit(0);
    }
    do{
        ch=fgetc(fp1);
        fputc(ch,fp2);
    }while(!feof(fp1));
    printf("After copy");
    rewind(fp2);
    do
    {
        ch=fgetc(fp2);
        printf("%c",ch);
    } while (!feof(fp2));
    fclose(fp1);
    fclose(fp2);
    

}