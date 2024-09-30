/*WRITE FORMATED DATA INTO FILE AND READ FROM FILE 
i.e. STUDENT INFO LIKE rno,name and per*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char name[20];
    int rno,i,n;
    float per;
    fp=fopen("F:/programs/stu.dat","w");
    printf("How may stdents");
    scanf("%d",&n);
    for (i=1;i<=n; i++)
    {
        printf("Enter roll number");
        scanf("\n%d",&rno);
        printf("\nEnter name of student");
        scanf("\n%s",name);
        printf("\nEnter percentages");
        scanf("\n%f",&per);
        fprintf(fp,"\n%d|%s|%f|",rno,name,per);
    }
    fclose(fp);
    fp=fopen("F:/programs/stu.dat","r");
    if (fp==NULL)
    {
       printf("****FLE DOES NOT EXIST****");
       exit(0);
    }
    do
    {
        fscanf(fp,"%d|%s|%f",&rno,name,&per);
        if(feof(fp))
        break;
        printf("\nRoll No=%d",rno);
        printf("\n Name=%s",name);
        printf("\n per=%f",per);
    } while(1);
    fclose(fp);
    
    
    
}