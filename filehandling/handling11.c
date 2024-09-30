/*copy contents of one file into another file using command line argument*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *args[])
{
    FILE *fp1,*fp2;
    char ch;
    if(argc!=3)
    {
        printf("wrong no.of arguments");
        exit(0);
    }
    fp1=fopen("F:/programs/abc.txt","r");
    fp2=fopen("F:/programs/xyz.txt","w+");
    if(fp1==NULL)
    {
        printf("file does not exist");
        exit(0);
    }
    do
    {
        ch=fgetc(fp1);
        fputc(ch,fp2);
    } while (!feof(fp1));
    printf("After Copy");
    rewind(fp2);
    do{
        ch=fgetc(fp2);
        printf("%c",ch);
    }while(!feof(fp2));
    fclose(fp1);
    fclose(fp2);   
}