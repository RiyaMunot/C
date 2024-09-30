/*convert case of each charecter to given file and copy contents into another file*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("F:/programs/abc.txt","r");
    fp2=fopen("F:/programs/xyz.txt","w+");
    if (fp1==NULL)
    {
        printf("File Does Not Exist");
        exit(0);
    }
    do
    {
        ch=fgetc(fp1);
        if(ch>='A'&&ch<='Z')
        ch=ch+32;
        else if(ch>='a'&&ch<='z')
        ch=ch-32;
        fputc(ch,fp2);
    } while (!feof(fp1));
    printf("After copy");
    fclose(fp2);
    fp2=fopen("F:/programs/xyz.txt","r");
    rewind(fp2);
    do{
        ch=fgetc(fp2);
        printf("%c",ch);
    }while (!feof(fp2));
    fclose(fp1);
    fclose(fp2);
}