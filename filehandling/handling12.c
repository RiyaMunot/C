/* write structure type data into file and read from file
i.e. student info like rno,name and per using structured array*/
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int rno;
    char name[20];
    float per;
}s[10];
int main()
{
    FILE *fp;
    int n,i;
    fp=fopen("F:/programs/stunew.txt","w");
    printf("how many students");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\n enter roll numer");
        scanf("%d",&s[i].rno);
        printf("\n enter name");
        scanf("%s",s[i].name);
        printf("\nenter percentage");
        scanf("%f",&s[i].per);
    }
        fwrite(&s,sizeof(struct student),n,fp);
        fclose(fp);
        fp=fopen("F:/programs/stunew.txt","r");
        if(fp==NULL)
        {
            printf("file does not exist");
            exit(0);
        }
fread(&s,sizeof(struct student),n,fp);
for(i=0;i<n;i++)
{
    printf("\nroll number=%d",s[i].rno);
    printf("\nname=%s",s[i].name);
    printf("\npercentage=%f",s[i].per);
}
fclose(fp);
}
