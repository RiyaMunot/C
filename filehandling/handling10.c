/* write structure type data into file and read file 
i.e. student info like rno,name and per and search info of given student by name*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int rno;
    char name[50];
    float per;
}s;
int main()
{
    FILE *fp;
    int n,i,flag=0;
    char sname[40];
    fp=fopen("F:/program/stu3.txt","a+");
    printf("how many students");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("\nenter roll no");
        scanf("%d",&s.rno);
        printf("\nenter name");
        scanf("%s",s.name);
        printf("\nenter percentage");
        scanf("%f",&s.per);
        fwrite(&s,sizeof(struct student),1,fp); 
    }
    printf("enter student name which info you want to search");
    scanf("%s",sname);
    rewind(fp);
    do{
        fread(&s,sizeof(struct student),1,fp);
        if(feof(fp))
        break;
        if(strcmp(s.name,sname)==0)
        {
            flag=1;
            break;
        }
    }while (1);
    if(flag)
    {
      printf("\nRoll No=%d",s.rno);
        printf("\n Name=%s",s.name);
        printf("\n per=%f",s.per);  
    }
    else
    printf("record not present");
    fclose(fp);

    
}