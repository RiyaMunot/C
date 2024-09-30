/* c program to check given charecter is present in given string*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],ch;
	int i,flag=0,pos=0;
	printf("Enter a string=\n");
	gets(str);
	printf("Enter charecter to be search=\n");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
	      flag=1;
	      break;
		}
	}
	if(flag)
	printf("char is present");
	else
	printf("char is not prsent");
}
