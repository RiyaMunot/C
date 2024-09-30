/*C program to check given string is palindrom or not
      121*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int l,i,mid,flag=1;
    printf("Enter a string=\n");
    gets(str);
    for(l=0;str[l]!='\0';l++);
    mid=l/2;
    for(i=0;i<mid;i++,l--)
    {
        if(str[i]!=str[l-1])
        {
        flag=0;
        break;
        }
    }
    if(flag)
    printf("\n string is palindrom");
    else
    printf("\nstring is not palindrom");
}