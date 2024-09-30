// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <string.h>
// // #include <sys/types.h>
// // #include <fcntl.h>
// // #include <unistd.h>

// // int main() {
 //     int outfd = open("3.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);

// //     if (!outfd) {
// //         perror("open");
// //         return EXIT_FAILURE;
// //     }

// //        dup2(outfd,1);
// //         close(outfd);
// //         execlp("ls", "ls", NULL);
// //         printf("Hii....Welcome");
// // }
// #include<stdlib.h>
// #include<stdio.h>
// #include<string.h>
// main(int argc, char *argv[])
// {
// char d[50];
// if(argc==2)
// {
// bzero(d,sizeof(d));
// strcat(d,"ls ");
// strcat(d,"> ");
// strcat(d,argv[1]);
// system(d);
// }
// }

#include<stdio.h>
#include<unistd.h>
int main()
{
    int fd[2],dupFd;
    char *filename1 ="ls";
    char *filename2 ="wc";
    char *arg1 = "-l";
    pipe(fd);
    if(!fork())// return 0 for child process and 1 for parent process
    {
        close(1); // 1 for closing stdout
        dup(fd[1]);
        close(fd[0]);
        execlp(filename1,filename1,arg1,NULL);
    }else
    {
        close(0);
        dup(fd[0]);
        close(fd[1]);
        execlp(filename2,filename2,arg1,NULL);
    } 
}