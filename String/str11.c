//Write prgrm to search given name is present in given string array
#include<stdio.h>
#include<string.h>
int main()
{
    char name[50][50],str[20];
    int i,n,flag=0;
    printf("\nHow many names you want=");
    scanf("%d",&n);
    printf("\nEnter the names");
    for(i=0;i<n;i++)
    {
        scanf("%s",&name[i]);
    }
    printf("\n Enter name to be search");
    scanf("%s",str);
    printf("\nName of students=\n");
    for(i=0;i<n;i++)
    {
        if(strcmp(name[i],str)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    printf("\n %s name present at %d position in given string",str,i);
}