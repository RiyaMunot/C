//TO check two string are equal,greater or less
#include<stdio.h>
#include<string.h>
int main()
{
    int l=0;
    char str1[]="Wel";
    char str2[]="come"; 
    l=strcmp(str1,str2);
    if(l==0)
    printf("str1=str2");
    else if(l>0)  
    printf("str1>str2");
    if(l<0)
    printf("str1<str2");
}