//print array in ascending order
#include<stdio.h>
int main()
{
    int a[50];
    int n,i,j,temp=0;
    printf("\n How many values you want=\n");
    scanf("%d",&n);
    printf("\n Enter array elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("\n in ascending order=\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;              
            }        
        }             
    }
    for(i=0;i<n;i++)
     printf("%d\t",a[i]);
   
}