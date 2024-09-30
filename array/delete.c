//Delete the value at given position
#include<stdio.h>
int main()
{
    int a[50];
    int pos,n,i;
    printf("\n How many values you want=");
    scanf("%d",&n);
    printf("\n Enter the values=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter postition which value you want to delete=");
    scanf("%d",&pos);
    for(i=pos;i<=n;i++)
    {
        a[i]=a[i+1];

    }
     printf("\n ARRAY =\n");
    for(i=0;i<n-1;i++)
    {
     printf("%d\t",a[i]);
    }    
}