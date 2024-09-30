//upper triangular matrix
//print write diagonal
//Enter and Dispaly values of matrix
#include<stdio.h>
int main()
{
    int a[5][5],n,i,j;
    printf("\n Enter size of matrix=");
    scanf("%d",&n);
    printf("\n Enter the values of MAtrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n values of Matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i>j)
            printf("%d\t ",a[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }
}