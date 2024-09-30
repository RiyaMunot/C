//display name of students starts with a
#include<stdio.h>
int main()
{
    int i,n;
    char name[50][50];
    printf("\nHow many values you want=");
    scanf("%d",&n);
    printf("Enter the name of students=\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&name[i]);
    }
        printf("\nName of Students=\n");
        for(i=0;i<n;i++)
        {
            if(name[i][0]=='a'||name[i][0]=='A')
            {
                printf("%s\n",name[i]);
            }
        }
    
} 