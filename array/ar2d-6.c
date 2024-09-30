//identity matrix or not
//print write diagonal
//Enter and Dispaly values of matrix
#include<stdio.h>
int main()
{
    int a[5][5],n,i,j,flag=1;
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
        for(j=0;j<=n;j++)
        {
            if(!(i==j&&a[i][j]==1||i!=j&&a[i][j]==0))
            {
              flag=0;
              break;
            }
            
        }
    }
        if(flag==1)
        printf("Matrix is identity matrix");
        else
        printf("Matrix is not identity matrix");

}