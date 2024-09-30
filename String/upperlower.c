/*c program to count no. of upper and lower case char in given string*/
#include<stdio.h>
#include<string.h>
int main()
{
   char str[50],ch;
   int upper=0,lower=0,i;
   printf("Enter a string");
   gets(str);
   for ( i = 0;str[i]!='\0' ; i++)
   {
      if(str[i]>='A'&&str[i]<='Z')
      {
      upper++;
      }
      else if(str[i]>='a'&&str[i]<='z')
      {
      lower++;
      }
         }
         printf("upper case charecter =%d and lowe case charecter=%d in given string",upper,lower);
   
 
}