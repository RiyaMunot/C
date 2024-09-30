//To sort name of students in ascending order
#include<stdio.h>
int main()
{
    char name[50][50],temp[50];
    int i,n,j;
    printf("\nHow many values you want=");
    scanf("%d",&n);
    printf("\nEnter the names");
    for(i=0;i<n;i++)
    {
        scanf("%s",&name[i]);
    }
   //printf("\nNames of Students in Ascending order");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-1;j++)
      {
        if(strcmp(name[j],name[j+1])>0)
        {
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);
        }
      }
    }
    printf("\nAfter Sort Array\n");
    for(i=0;i<n;i++)
    printf("%s\n",name[i]);

}