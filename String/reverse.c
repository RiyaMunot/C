/* C program to reverse the string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],ch;
    int i,mid,l;
    printf("Enter a string=\n");
    gets(str);
    for(l=0;str[l]!='\0';l++);
    mid = l/2;
    for(i=0;i<mid;i++,l--)
    {
        ch=str[i];
        str[i]=str[l-1];
        str[l-1]=ch;
    }
    printf("\nReverse string=%s",str);
}