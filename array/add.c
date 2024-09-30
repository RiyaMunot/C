#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],n,i;
    printf("\n how many values you want=");
    scanf("%d",&n);
    printf("Enter vslues of first array=\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter vslues of second array=\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n addition of array=\n");
     for ( i = 0; i < n; i++)
     {
         c[i]=a[i]+b[i];
     }
     printf("After addition array=\n");
     for ( i = 0; i < n; i++)
     {
         printf("%d ",c[i]);
     }

    
}