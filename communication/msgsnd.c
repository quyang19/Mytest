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
    //msqid = msgget(IPC_PRIVATE,SVMSG_MODE | IPC_CREAT);
    msgQid = msgget(1024,IPC_CREAT);
    //buf.mtype = 1;
    //buf.mtext[0] = 1;
    msgsnd(msgQid,buf,4,0);
    //msgctl(msqid,IPC_STAT,&info);
    //printf("read-write:%03,cbytes=%lu,qnum=%lu,qbytes=%lu\n",
    //info.msg_perm.mode,info.msg_cbytes,info.msg_qnum,info.mssg_qbytes);
    //system("ipcs -q");
    //amsgctl(msqid,IPC_RMID,NULL);
    exit(0);
}
