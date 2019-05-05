//
//  main.c
//  base
//
//  Created by 李应鹏 on 2018/11/24.
//  Copyright © 2018 李应鹏. All rights reserved.
//

#include <stdio.h>
void (*pf)(int i);
void ff(int i)
{
    printf("ff\n");
    
}
void hhh(void (*pf)(int) )
{
    ff(1);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //int a[3][2]={{0,1},{2,3},{4,5}};
    //int aa[10];
    //int *p = a;
    //p++;
    //pf = ff;
    hhh(ff);
   // printf("%u,%d,%u,%u\n",a,p[0],a[0]+1,p);
    
   // printf("\n%x,%x",aa,&aa);
    return 0;
}
