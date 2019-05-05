/*
 * 1）有一int型全局变量g_Flag初始值为0；
 *
 * 2）在主线称中起动线程1，打印“this is thread1”，并将g_Flag设置为1
 *
 * 3）在主线称中启动线程2，打印“this is thread2”，并将g_Flag设置为2
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<errno.h>
#include<unistd.h>

int g_Flag=0;

void* thread1(void*);
void* thread2(void*);

/*
 * when program is started, a single thread is created, called the initial thread or main thread.
i * Additional threads are created by pthread_create.
 * So we just need to create two thread in main().
 *__func__的含义：编译的时候会替代这条语句所在的函数的函数名
 */
int main(int argc, char** argv)
{
     pthread_t tid;
  tid = pthread_self();
  printf("main:pid=%d,tid=%d",getpid(),tid); 
   tid = pthread_create(tid,NULL);
return 0;
    #if 0
    void* rval=NULL;
    printf("enter main\n");
    pthread_t tid1, tid2;
    int rc1=0, rc2=0;
    rc2 = pthread_create(&tid2, NULL, thread2, NULL);
    if(rc2 != 0)
        printf("%s: %d\n",__func__, strerror(rc2));
    
    pthread_join(tid2,&rval); /*自己添加的，没有这段等待，主函数会直接enter main-》leave main*/
    printf("thread2 exit code(%d)\n",(int)rval);
    
    
    rc1 = pthread_create(&tid1, NULL, thread1, &tid2);
    if(rc1 != 0)
        printf("%s: %d\n",__func__, strerror(rc1));
    
    
    
    pthread_join(tid1,&rval); /*自己添加的，没有这段等待，主函数会直接enter main-》leave main*/
    printf("thread2 exit code(%d)\n",(int)rval);
    
    printf("leave main\n");exit(0);}
/* * thread1() will be execute by thread1, after pthread_create() * it will set g_Flag = 1; */
void* thread1(void* arg){
    printf("enter thread1\n");
    printf("this is thread1, g_Flag: %d, thread id is %u\n",g_Flag, (unsigned int)pthread_self());
    g_Flag = 1;
    printf("this is thread1, g_Flag: %d, thread id is %u\n",g_Flag, (unsigned int)pthread_self());
    printf("leave thread1\n");
    pthread_exit(0);
}
/* * thread2() will be execute by thread2, after pthread_create() * it will set g_Flag = 2; */
void* thread2(void* arg){
    printf("enter thread2\n");
    printf("this is thread2, g_Flag: %d, thread id is %u\n",g_Flag, (unsigned int)pthread_self());
    g_Flag = 2;
    printf("this is thread1, g_Flag: %d, thread id is %u\n",g_Flag, (unsigned int)pthread_self());
    printf("leave thread2\n");
    pthread_exit(0);

#endif
}
