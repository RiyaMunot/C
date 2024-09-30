//print prime number from given array
#include<stdio.h>
int main()
{
    int a[50];
    int n,i,j,flag;
    printf("\n How many values you want=");
    scanf("%d",&n);
    printf("\n Enter array elements=\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        flag=1;
        for(j=2;j<n;j++)
        {
            if(a[i]%j==0)
            {
            flag=0;
            break; 
            } 
                      
        }
        if(flag)
            printf("%d\t",a[i]);
    }
    
}