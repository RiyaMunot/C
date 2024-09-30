/*write structure type data into file and read from file
i.e.student info like rno,name and per but add new record with privious file*/
#include<stdio.h>
#include<stdlib.h>
struct student{
    int rno;
    char name[20];
    float per;
}s;
int main()
{
    FILE *fp;;
    int n,i;
    fp=fopen("F:/programs/stu3.txt","a");
    printf("How many students");
    scanf("%d",&n);
    for (i=1;i<=n; i++)
    {
        printf("\nenter roll no");
        scanf("%d",&s.rno);
        printf("\nenter name");
        scanf("%s",s.name);
        printf("\nenter percentage");
        scanf("%f",&s.per);
        fwrite(&s,sizeof(struct student),1,fp);
    }
   fclose(fp);
   fp=fopen("F:/programs/stu3.txt","r");
   if (fp==NULL)
   {
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
   } while(1); 
 fclose(fp);
}