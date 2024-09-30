/*Write structure type data into file and read from file
i.e. student info like rno,name and per*/
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int rno;
    char name[20];
    float per;
}s;
int main()
{
    FILE *fp;
    int n,i;
    fp=fopen("F:/programs/stu2.txt","w");
    printf("how many students");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
         printf("Enter roll number");
        scanf("\n%d",&s.rno);
        printf("\nEnter name of student");
        scanf("\n%s",s.name);
        printf("\nEnter percentages");
        scanf("\n%f",&s.per);
        fwrite(&s,sizeof(struct student),1,fp);
    }
    fclose(fp);
    fp=fopen("F:/programs/stu2.txt","r");
    if (fp==NULL)
    {
        printf("****File Does Not Exist****");
        exit(0);
    }
    do
    {
        fread(&s,sizeof(struct student),1,fp);
        if(feof(fp))
        break;
         printf("\nRoll No=%d",s.rno);
        printf("\n Name=%s",s.name);
        printf("\n per=%f",s.per);
    } while (1); 
    fclose(fp);   
    

}