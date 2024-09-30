/*sum of nth tearm
x^2/2!+x^4/4!.......x^n/n!
*/
#include<stdio.h>
int main()
{
    int x,n,i,f=1,power=1,j;
    float sum=0;
    printf("\n Enter the value of n=");
    scanf("%d",&n);
    printf("\nEnter the value of x=");
    scanf("%d",&x);
    for(i=2,j=i;i<=n,j<=n;i+=2,j--)
    {
        while(j>0)
    {
        f=f*i;
        power=power*x;
        i--;
    }
    sum=sum+power/f;
 }
 printf("\n sum of nth element=%d",sum);
    
    
}