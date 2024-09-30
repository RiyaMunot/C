// check given number is armstrong or not
#include<stdio.h>
#include<math.h>
  int main()
{
    int n, x, digit, ct = 0, sum = 0;
    printf("enter number to check");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        ct++;
    }
    n = x;
    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        sum = sum + pow(digit, ct);
    }
    printf("sum=%d", sum);
    if (sum == x)
    {
     printf("\nnumber is armstrong");
    }
    else
    {
     printf("\nnumber is not armstrong");
    }
    return 0;
}