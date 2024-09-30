/*copy one string innto another string
str1[0]=str2[0]
str1[1]=str2[1]
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int i;
    printf("\n Enter a string");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    printf("After copy string=%s",str2);
}