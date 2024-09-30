/*writa prgrm to create n*n matrix and create n+1*n+1 matrix .
For these find row sum and col sum of elements*/
//identity matrix or not
//print write diagonal
//Enter and Dispaly values of matrix
#include<stdio.h>
int main()
{
    int a[5][5],n,i,j,s;
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
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];            
        }
        a[i][n]=s;
    }

    for(j=0;j<n+1;j++)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+a[j][i];            
        }
        a[n][j]=s;
    }
    printf("\n Enter the values of MAtrix\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
        
}