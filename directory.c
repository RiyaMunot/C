// #include<stdio.h>
// #include<dirent.h>

// int main(void)
// {
//     DIR *d;
//     struct dirent *dir;
//     int ct=0;
//     d = opendir("F:/programs/html proograms");
//     if (d)
//     {
//         while ((dir = readdir(d)) != NULL)
//         {
//             printf("%s\n", dir->d_name);
//             ct++;
//         }
//         printf("No of files=%d",ct);
//         closedir(d);
//     }
//     return(0);
// }
#include<stdio.h>
#include<dirent.h>
int main(void)
{
    DIR *d;
    struct dirent *dir;
    int ct=0;
    d=opendir("F:/programs/cprogram");
    if(d){
        while((dir=readdir(d))!=NULL)
        {
            printf("%s\n",dir->d_name);
            ct++;
        }
        printf("No of files=%d",ct);
        closedir(d);
    }
    return 0;
}


