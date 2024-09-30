/*c program to search charecter present at which position*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ch;
	int pos,i;
	printf("\n enter string");
	gets(str);
	printf("enter char ");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch){
		pos=i;
	}
	}
	printf("char present at %d position",pos);
}