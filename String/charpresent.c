/*c program to check given charecter how many times present in a string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch;
    int i,ct=0;
    printf("Enter a string=\n");
    gets(str);
    printf("Enter a charecter to check=");
    scanf("%c",&ch);
    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==ch)
        {
            ct++;
        }
        
    }
    printf("\ncount =%d",ct);
    printf("\n \'%c\' is present in string \"%s\"  %d times",ch,str,ct);
    
}