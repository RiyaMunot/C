// // c program to print table of given number
// #include<stdio.h>
// int main(){
// int n,i,mul;
// printf("\nenter number which table you want");
// scanf("%d",&n);
// for(i=1;i<=10;i++)
// {
//     mul=n*i;
//     printf("\n\t%d*%d=%d",n,i,mul);
// }
// return 0;
// }
//c program for tables upto  n numbers
#include<stdio.h>
int main(){
int i,j,mul;
for(i=1;i<=10;i++)
{
    for(j=1;j<=10;j++)
    {
        mul=i*j;
         printf("%-6d",mul);
    }
    printf("\n");
}
return 0;
}
