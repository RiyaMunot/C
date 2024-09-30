// c program to print n numbers of fibonacii series
// 0, 1, 1, 2, 3, 5, 8, 13,
// // a   b    c
//    0   1  
//    0 + 1    1                c=a+b   
//    1 + 0    1                 b=a
//    1 + 1    2                 a=c     
//    2 + 1    3 
//    3 + 2    5
#include<stdio.h>

int main(){
    int n,a=0,b=1,fibo;
    printf("enter upto which number you want fibonacii series =");
    scanf("%d",&n);
    printf("***FIBONACII SERIES***\n");
    while(n>=0)
    {
        fibo=a+b;
        // if(fibo%2==0)
        // {    
        printf("\t%d",fibo);
        // }
        b=a;
        a=fibo;
        n--;
        
        
    }
    
    return 0;
}










