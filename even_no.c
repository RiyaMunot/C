#include <stdio.h>

int main()
{

    int n, i;
    printf("how many even numbers you want? =");
    scanf("%d", &n);
    printf("*****even numbers are*****");
    for(i=2;i<=n;i+=2)
    {
    printf("\n%d",i);
    }
    return 0;
}