//count no. of charecters in string
#include<stdio.h>
int main()
{
    int ct=0,i;
    char str[20];
    printf("Enter the String");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        ct++;
    }
    printf("Total number of charecters in given string is = %d ",ct);
}