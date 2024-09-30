//palindrom between 1-500
#include<stdio.h>
int main()
{
	int n,i,digit,x,s;
	printf("\n******PALINDROM NUMBERS******\n");
	for(i=1;i<500;i++)
   {
    	s=0;
		n=i;
    	while(n!=0)
    	{
        	 digit=n%10;
         	 n=n/10;
	         s=s*10+digit;
	    }
	 if(i==s)
	 printf("%d\t",i);
   }	
}
