//enter values of matrix and display it
#include<stdio.h>
int main()
{
    int a[5][5];
    int m,n,i,j;
    printf("\n how many rows and columns you want=");
    scanf("%d%d",&m,&n);
    printf("\n Enter values of matrix=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("\n values of matrix=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
       printf("\n");
    }

} 