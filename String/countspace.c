/*c program to count no. of blank spaces from given string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,ct=0;
    printf("\n Enter a string=\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
        ct++;
        }
    }
    printf("\n No. of blank spaces in given string = %d",ct);

}