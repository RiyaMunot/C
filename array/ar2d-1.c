//Enter and Dispaly values of matrix
#include<stdio.h>
int main()
{
    int a[5][5],r,c,i,j;
    printf("\n Enter the no. of rows and columns=");
    scanf("%d%d",&r,&c);
    printf("\n Enter the values of MAtrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n values of Matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n%d ",a[i][j]);
        }
        printf("\n");
    }
}