#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
pthread_t new_tid;
void printThread(const char* s)
{
    pid_t pid;
    pthread_t tid;
    pid = getpid();
    tid = pthread_self();
    printf("%s, pid is %lu, tid is %x \n", s, (unsigned long)pid, (unsigned long)tid);
}
void* entranThr(void* arg)
{
    printf("create a children thread\n");
    printThread("children thread");
}
void main()
{

    int err = 0;
    err = pthread_create(&new_tid, NULL, entranThr, NULL);
    pid_t pid;
    pthread_t tid;
    pid = getpid();
    tid = pthread_self();
    printf("main thread pid is %lu, tid is %x,new_tid is %x\n", (unsigned long)pid, (unsigned long)tid, (unsigned long)new_tid);
    sleep(5);
}

