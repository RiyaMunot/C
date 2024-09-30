//count no. of words and char from given string
#include<Stdio.h>
int main()
{
    char str[20];
    int i=0,up=0,ctw=0,ctc=0;
    printf("\n Enter string=\n");
    gets(str);
   for(i=0;str[i]!='\0';i++)
   {
     if(str[i]==' '||str[i]=='\n')
     ctw++;
     else 
       ctc++;
   }
   printf("\n No. of words=%d",ctw);
   printf("\n No. of char=%d",ctc);
}