//Demo for string functions
#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char str1[]="Wel";
    char str2[]="come";
    l=strlen(str1);
    printf("\nLength of str1=%d",l);
    strcat(str1,str2);
    printf("\nconcat=%s",str1);
    strcpy(str1,str2);
    printf("\n copy string=%s",str1);
    printf("\npos of c = %lu",strchr(str2,'c'));
    strupr(str1);
    printf("\n str in upper case=%s",str1);
    strlwr(str1);
    printf("\n str in lower case =%s",str1);
    strrev(str1);
    printf("\nAfter reverse str1=%s",str1);
    printf("%d",&str2[0]);
}