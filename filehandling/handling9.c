/* enter file name from user and count number of lines,words and charecters from given file*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch,fname[30];
    int ctch=0,ctw=0,ctl=0;
    printf("enter file name");
    scanf("%s",fname);
    fp=fopen("F:/programs/handling.txt","r");
    if(fp==NULL)
    {
        printf("File does not exist");
        exit(0);

        
    }
    do{
        ch=fgetc(fp);
        if (ch=='\n')
        {
            ctl++;
            ctw++;
        }
        else if(ch==' ')
        ctw++;
        else
        ctch++;
    }while(!feof(fp));
    fclose(fp);
    printf("\n no. of lines=%d",ctl);
    printf("\n no. of words=%d",ctw);
    printf("\n no. of char=%d",ctch);
   

}