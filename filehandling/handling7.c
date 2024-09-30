/* Count no. of upper case and lowe case char in file*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1;
    int ctu=0,ctl=0;
    char ch;
    fp1=fopen("F:/programs/stu.dat","r");
    if(fp1==NULL)
    {
        printf("File Does Not exist");
        exit(0);
    }
    do
    {
        ch=fgetc(fp1);
        if(ch>='A'&& ch<='Z')
        ctu++;
         else if(ch>='a'&& ch<='z')
        ctl++;
    } while (!feof(fp1));
    printf("No of char in uppercase=%d",ctu);
    printf("no of char in lower case=%d",ctl);
    fclose(fp1);
    
}