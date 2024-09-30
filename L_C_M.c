//                         a=12      b=15
// if (a<b) then           a=a+12
// and if(a>b) then                  b=b+15
// upto  whenever value of a and b become not same the loop going on
#include <stdio.h>
int main()
{
    int a, b, x, y;
    printf("enter the value of a and b");
    scanf("%d%d", &a, &b);
    x = a;
    y=b;
    while (a != b)
    {
        if (a < b)
        {
            a = a + x;
        }
        else
        {
            b = b + y;
        }
    }

    printf("L.C.M = %d", a);
  return 0;
}