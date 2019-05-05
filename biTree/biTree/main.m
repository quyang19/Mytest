//
//  main.m
//  biTree
//
//  Created by 李应鹏 on 2018/12/20.
//  Copyright © 2018 李应鹏. All rights reserved.
//

#import <Foundation/Foundation.h>

#include<stdio.h>
typedef struct biTree
{
    int value;
    struct biTree *lTree;
    struct biTree *rTree;
}biTreeBode,*biTree;

biTree insertBt( int *preStart, int *preEnd, int *inStart, int *inEnd)
{
    biTree bNew = NULL;
    biTree bT=NULL;
    biTree root = NULL;
    int length=0;
    root = (biTree)malloc(sizeof(biTreeBode));
    root->value = preStart[0];
    root->lTree = NULL;
    root->rTree = NULL;
    if( (preStart - preEnd)>=0 )
    {
        return root;
    }
    
    while(inStart[length++]!=preStart[0]&&length<(inEnd-inStart+1));
    length--;
    root->lTree = insertBt( preStart+1, preStart+length, inStart, inStart+length-1);
    root->rTree = insertBt( preStart+length+1,preEnd, inStart+length+1, inEnd );
    return root;
}
void main()
{
    int preArr[8]={1,2,4,7,3,5,6,8};
    int inArr[8]={4,7,2,1,5,3,8,6};
    int p=0;
    int i=0;
    biTree root;
    root = insertBt( preArr, &preArr[7], inArr, &inArr[7] );
}
