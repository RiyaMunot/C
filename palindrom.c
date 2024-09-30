//check given number is palindrom or not
#include <stdio.h>
int main()
{
    int n, digit, rev = 0, x;
    printf("enter the value which you want to check");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        rev = rev * 10 + digit;
    }
    if (rev == x)
    {
        printf("\nnumber is palindrom");
    }
    else
    {
        printf("\nnumber is not palindrom");
    }

    return 0;
}