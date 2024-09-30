// the number 6 divisible by its smaller number which is 1,2,3
// and 6....1+2+3=6
//          1*2*3=6
#include <stdio.h>

int main()
{

    int n, x, i, sum = 0;
    printf("enter number to check");
    scanf("%d", &n);
    x = n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (x == sum)
    {
        printf("number is perfect");
    }
    else
    {
        printf("number is not perfect");
    }

    return 0;
}