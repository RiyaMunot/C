/* Transpose of matrix

00 | 0 1 |01       0 1 2
10 | 1 2 |11       1 2 3
20 | 2 3 |21 
*/
#include<stdio.h>
int main()
{
    int a[20][20],b[20][20];
    int m,n,i,j;
    printf("\nhow many rows and columns=");
    scanf("%d%d",&m,&n);
    printf("\n Enter values of matrix=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
      b[j][i]=a[i][j];
      }
    }
    printf("Transpose=\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}