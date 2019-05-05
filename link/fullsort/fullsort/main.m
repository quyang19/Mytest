//
//  main.m
//  fullsort
//
//  Created by 李应鹏 on 2019/1/16.
//  Copyright © 2019 李应鹏. All rights reserved.
//

#import <Foundation/Foundation.h>

#if 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int a[10];
#if 0
/*
 单向链表
 */
typedef struct ListNodest
{
    int value;
    struct ListNodest *pNext;
}ListNode,*List;


List create()
{
    List list1 = NULL;
    List lNode = (List)malloc(sizeof(ListNode));
    List Tmp = NULL;
    int i=0;
    lNode->value = 0;
    lNode->pNext = NULL;
    list1 = lNode;
    
    for(i=1;i<9;i++)
    {
        Tmp = malloc(sizeof(ListNode));
        Tmp->pNext = NULL;
        Tmp->value = i;
        lNode->pNext = Tmp;
        lNode = lNode->pNext;
    }
}
#endif
typedef struct
{
    char  version;
    char  traffic_class;
    unsigned int flow_label;
    unsigned int payload_len;
    char  next_header;
    char  hop_limit;
    char  saddrv6[16];
    char  daddrv6[16];
} IPV6_OPTION_ST;

int F(int n)
{
    if((1==n)||(2==n))
        return 1;
    if(a[n] )
    {
        return a[n];
    }
    a[n]=F(n-1)+F(n-2);
    return a[n];
}


void nmhGetOnuInfoCapability2(unsigned char *ucCap)
{
    //EPON_ONU_CAPA_2_NMS OnuInfoCapability2;
    
    //memcpy( ucCap, &OnuInfoCapability2, sizeof(OnuInfoCapability2) );
}

void ff(void *fkk)
{
    int *ff=(int *)fkk;
}

typedef unsigned char TkMacAddress[6];
typedef struct
{
    TkMacAddress target;                /*逻辑链路MAC地址*/
    unsigned char  OperSerDBA;                  /*operation of services DBA*/
    unsigned char  BestEffShedule;              /*Best effort sheduling scheme*/
    unsigned char  HighPriboundary;             /*High Priority boundary*/
    unsigned long  CycleLen;                    /*Cycle Length*/
    unsigned char  NumServices;                 /*Number of services 1-8*/
} GetSetServiceSLA;


char *pCh;
char tmp=0;
void ppp(char *pstr, char *begin)
{
    if(*begin == '\0')
    {
        printf("%s\n",pstr);
    }
    else
    {
        for(pCh=begin;*pCh!='\0';++pCh)
        {
            tmp = *pCh;
            *pCh=*begin;
            *begin = tmp;
            ppp(pstr,begin+1);
            tmp = *pCh;
            *pCh=*begin;
            *begin = tmp;
        }
    }
    
}
void main()
{
    //char a[100]={1,2,3,4,2,2,2,2,2,2,2,2,2,2,2,2,4,3,4,5,2,3,3,3,3,4,5,5,4,4,4,4,4,7,7,7,7,7,7,7,7,77,7,77,8,8,8};
    int hhh;
    char* a,b;
    char *nn=NULL;
    char ss[100] = {0};
    char kk[100] = "\0";
    int sum = 0;
    unsigned char buffer[4] = {'a','b','\0'};
    IPV6_OPTION_ST  ipv6={0};
    GetSetServiceSLA frame;
    //memcpy( &ipv6, a, sizeof( IPV6_OPTION_ST ) );
    //hhh = *(&ipv6.version+40);
    //hhh = memcmp(ss,kk,100);
    //create();
    //nn = malloc(1);
    
    //assert(nn!=NULL);
    //printf("%d",11);
    
    void *vp=NULL;
    memset(&frame,0,sizeof(GetSetServiceSLA));
    memcpy(frame.target,"123456",6);
    frame.OperSerDBA='h';
    frame.BestEffShedule = 'e';
    frame.HighPriboundary = 'l';
    frame.CycleLen=100;
    
    ppp(buffer,buffer);
    
    ff(ss);
    vp = ss;
    vp = &hhh;
    sum = F(5);
    exit(0);
}
#endif

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

void swap(char* c1,char* c2){
    char tmp=*c1;
    *c1=*c2;
    *c2=tmp;
}

void permutation(char* pstr,char* pbegin){
    if(*pbegin=='\0')
        printf("%s\n",pstr);
    else{
        for(char* pCh=pbegin;*pCh!='\0';pCh++){
            swap(pbegin,pCh);
            permutation(pstr,pbegin+1);
            swap(pbegin,pCh);
        }
    }
}

void permutationStr(char* pstr){
    if(pstr==NULL)
        return;
    permutation(pstr,pstr);
}


int main()
{
    char str[4]="abc";
    permutationStr(str);
    return 0;
}
