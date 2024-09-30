// check given number is prime or not
// no is which is divisible by 1 and itself
#include <stdio.h>
int main()
{
    int n, i, flag = 1;
    printf("enter number to check");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("\ngiven number is prime");
    }
    else
    {
        printf("given number is not prime");
    }

    return 0;
}