#include <stdio.h>
int main()
{
    int n, x, digit, sum = 0, octl = 1;
    printf("\nenter the value which you want to convert");
    scanf("%d", &n);
    x = n;
    while (n != 0)
    {
        digit = n % 10;
            n = n / 10;
          sum = sum + digit * octl;
         octl = octl * 8;
    }
 printf("\n%d is decimal equivallent of binary number %d ", sum, x);
 return 0;
}