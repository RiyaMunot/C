//count no. of blank spaces from given string
#include<stdio.h>
int main()
{
    char str[20];
    int ct=0,i=0;
    printf("\n Enter the string=\n");
    gets(str);
    // while (str[i]!='\0')
    for(i=0;str[i]!='\0';i++)
     {
      if(str[i]==' ')
      ct++;
        
    }
    printf("No. of blank spaces in given string is =%d",ct);
    

}