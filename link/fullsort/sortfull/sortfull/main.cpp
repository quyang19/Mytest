//
//  main.cpp
//  sortfull
//
//  Created by 李应鹏 on 2019/1/16.
//  Copyright © 2019 李应鹏. All rights reserved.
//

#include "main.hpp"
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
    char str[4]="ab";
    permutationStr(str);
    return 0;
}
