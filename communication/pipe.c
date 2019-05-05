#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
void main()
{
    int fd[2];
    pid_t pid;
    char buf[1024];
    int real_read,real_write;
    pipe(fd);
   
    if((pid=fork()) == 0 )
    {
       close(fd[1]);
       sleep(10*3);
       if((real_read = read(pipe[0],buf,1024))>0)
       {
           printf("%d  read from the pipe is %s",real_read,buf);
       } 
      close(fd[0]);
      exit(0);
    }
    else if(pid>0)
    {
       if((real_date=write(fd[1],"123456",1024))!=-1)
       {
           printf("parent write %d bytes",real_write);
       }
       waitpid(pid,NULL,0);
    }
}
