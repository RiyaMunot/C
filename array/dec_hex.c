//decimal to hex
#include<stdio.h>
int main()
{
    int a[50];
    int n,j,i=0;
    printf("\n Enter decimal number=");
    scanf("%d",&n);
    while(n!=0)
    {
        a[i]=n%16;
        n=n/16;
        i++;
    }
    printf("\n dec to hex=\n");
    for(j=i-1;j>=0;j--)
    if(a[j]<=9)
    printf("%d",a[j]);
    else
    printf("%c",a[j]+55);
}