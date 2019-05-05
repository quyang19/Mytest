#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <errno.h>

void main(int argc, char **argv)
{
    int msgQid = 0;
    struct msqid_ds info;
    //struct msgbuf buf;
    char buf[5]="1234";
    
    msgrcv(1024, buf, 4, 0, 0);
    printf("%d\n",buf[0]);

     
   // exit(0);
}

