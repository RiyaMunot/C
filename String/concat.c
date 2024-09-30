/*concatation of 2 string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    int i,j;
    printf("\nEnter 1st string=\n");
    gets(str1);
    printf("\nEnter second string=\n");
    gets(str2);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++,i++)
    {
        str1[i]=str2[j];
    }
    
   // str1[i]='\0';
    printf("after concatation str1=%s",str1);
}
