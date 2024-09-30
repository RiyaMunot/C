//write prgrm for swapping of two strings
#include<stdio.h>
#include<string.h>
int main()
{
    int l=0;
    char str1[]="Wel";
    char str2[]="come"; 
    char temp[20];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("\n After swaping");
    printf("\n%s",str1);
    printf("\n%s",str2);
}