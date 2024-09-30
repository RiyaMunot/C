/*c program to count no. of charecters from a given string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int count=0;
    printf("\nEnter string");
    gets(str);
    while (str[count]!='\0')
    {
        count++;
    }
    printf("No Of Elements In Given String=%d",count);
    
}