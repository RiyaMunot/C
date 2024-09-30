//to count no. of char how many times present in given string
#include<stdio.h>
int main()
{
    int ct=0,i=0;
    char str[20],ch;
    printf("Enter Your String=\n");
    gets(str);
    printf("Enter char to be search");
    ch=getchar();
   for(i=0;str[i]!='\0';i++)
   {
    if (str[i]==ch)
    {
    ct++;
   }
   }
    printf("\n %c char present %d times in given string",ch,ct);
}