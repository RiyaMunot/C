/*C program to accept char till user enter EOF charectr and count no. of vowels*/
#include<stdio.h>
int main()
{
    int ct=0;
    char ch;
    printf("\n Enter charecter and enter /'$'/ at the end\n");
    do{
        scanf("%c",&ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        ct++;
    }while(ch!='$');
    printf("\n no. of vowels=%d",ct);



}