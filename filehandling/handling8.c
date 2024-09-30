/* create a number file,from this file even no.stores into even file and odd nos. store into odd file*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2 ,*fp3;
    int no,n,i;
    fp1=fopen("F:/programs/numbers.dat","w+");
    fp2=fopen("F:/programs/even.dat","w+");
    fp3=fopen("F:/programs/odd.dat","w+");
    printf("How many numbers");
    scanf("%d",&n);
    printf("enter numbers=\n");
    for ( i = 0; i <= n; i++)
    {
        scanf("%d",&no);
        fprintf(fp1,"%d ",no);
    }
    rewind(fp1);
    do
    {
        fscanf(fp1,"%d",&no);
        if(feof(fp1))
        break;
        if(no%2==0)
        fprintf(fp2,"%d ",no);
        else
        fprintf(fp3,"%d ",no);
    } while (1);
    printf("\n****Content in even file****\n");
    rewind(fp2);
    do
    {
        fscanf(fp2,"%d",&no);
        if(feof(fp2))
        break;
        printf("%d",no);
    } while (1);
     printf("\n****Content in odd file****\n");
    rewind(fp3);
    do
    {
        fscanf(fp3,"%d",&no);
        if(feof(fp3))
        break;
        printf("%d",no);
    } while (1);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    
}
    
    
    
    
    
 