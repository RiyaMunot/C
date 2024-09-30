// c program to find sum of of nth tearms
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("enter the value of n =");
    scanf("%d",&n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum of %d tearms =%d", n, sum);

    return 0;
}