//2d array
//Write prgrm to enter name of n students and display it.
#include<stdio.h>
int main()
{
    char name[10][20];
    int i,n;
    printf("\nHow many values you want=");
    scanf("%d",&n);
    printf("\nEnter name of students=");
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    printf("\nName of students\n");
    for(i=0;i<n;i++)
    printf("%s\n",name[i]);
}