/*c program to count no. of alphabates,digits,special charecter in given string */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,cta=0,ctd=0,stsp=0;
	printf("\n enter string=\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		{
		   cta++;
		}
	else if(str[i]>='0'&&str[i]<='9')
		{
			ctd++;
	    }
	    else
	       stsp++;
	}
	printf("no. of alphbates= %d\n no. of digits= %d\n no. of special charecter=%d",cta,ctd,stsp);
}
