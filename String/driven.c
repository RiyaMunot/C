/*Write program which except sentance from user and perform as follows
1->Every space is replace by star
2->case of all alphabater is reversed
3->digit are replace by question mark
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("\n Enter a string=\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
          str[i]= '*';
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
          str[i]-=32;
        }
         else if(str[i]>='A'&&str[i]<='Z')
        {
          str[i]+=32;
        }
         else if(str[i]>='0'&&str[i]<='9')
        {
          str[i]='?';
        }
    }
    printf("After replace string=%s",str);
}