/*c program to count no. of charecters and no. of words from given string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,ctw=0,ctc=0;
    printf("Enter a string=\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '||str[i]=='\n')
        ctw++;
        else
        ctc++;
    }
    printf("\n no. of words=%d",ctw+1);
    printf("\n no. of charecter =%d",ctc);
}