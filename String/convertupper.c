/*C program to convert string in upper case*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("\n Enter a string=");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }
    }
    printf("\n string=%s",str);
}