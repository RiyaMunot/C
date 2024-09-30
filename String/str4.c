//write program to count no. of upper case nd lower case char
#include<Stdio.h>
int main()
{
    char str[20];
    int i=0,up=0,lw=0,flag=0;
    printf("\n Enter string=\n");
    gets(str);
   for(i=0;str[i]!='\0';i++)
   {
    if(str[i]>='a'&&str[i]<='z')
       lw++;
    else if(str[i]>='A'&&str[i]<='Z')
       up++;
   }
   printf("No. of uppercase char=%d",up);
   printf("No of lower case char=%d",lw);
}