// a=12  if a>b then a=a-b else b=b-a
// b=15
// a          b
// 12        15
//     condn
//         15-12=3
//     codn  
// 12-3=9
//     condn
// 9-3=6
//     condn
// 6-3=3
// a==b print 
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    printf("G.C.D = %d",a);
    return 0;
}         