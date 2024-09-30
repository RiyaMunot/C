/*C program to check two strings  are equal or not*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int i;
    printf("enter first string=\n");
    gets(str1);
    printf("Enter second string=\n");
    gets(str2);
    for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        break;
    }
    if(str1[i]=='\0'&&str2[i]=='\0')
    printf("strings are equal");
    else if(str1[i]>str2[i])
    printf("\nstr1>str2");
    else
    printf("\nstr1<str2");
}
