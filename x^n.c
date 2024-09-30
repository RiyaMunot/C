// // //calculate x^n without power fuction
// // x=3   n=4   3^4 = 3*3*3*3
//                  9 = 3*3
// //              27 = 9*3
// //              81 = 27*3
//                ans = ans * x
//                  n--

#include<stdio.h>

int main(){
    int x,n,power=1;
    printf("enter the value of x  and n =");
    scanf("%d%d",&x,&n);
    while(n>0)
    {
        power=power*x;
        n--;
    }
    printf("x^n=%d",power);



    
    return 0;
}