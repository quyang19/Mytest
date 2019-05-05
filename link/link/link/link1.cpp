//
//  link1.cpp
//  link
//
//  Created by 李应鹏 on 2018/11/13.
//  Copyright © 2018 李应鹏. All rights reserved.
//

#include "link1.hpp"
#include <stack>
#include <iostream>
using namespace std;
typedef struct  LinkNode
{
    int value;
    struct LinkNode *pNext;
}LinkNode, *Link;

typedef struct doubleLink
{
    int value;
    doubleLink *pre;
    doubleLink *next;
};

typedef struct doubleLink
{
    int value;
    doubleLink *pre;
    doubleLink *next;
};

typedef struct
{
    Node *pre;
    Node *next;
}Node;

typedef struct
{
    Node node;
    int mvlan;
    int group;
}igmp_st;

typedef struct
{
    Node node;
    int count;
}List;
insert(List)
{
    List
    
}

void recurse(Link head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        recurse(head->pNext);
    }
    printf("%d\n",head->value);
}
int main(int argc, const char * argv[]) {
    
    Link head = (Link)malloc(sizeof(LinkNode));
    Link pNew;
    Link tail = head;
    Link pNode;
    Link hhh = new LinkNode;
    int a[5];
    int i = 0;
    stack<Link> first;
    List head;
    head =
    
    for( i=0; i<5; i++)
    {
        pNew = (Link)malloc(sizeof(LinkNode));
        pNew->value = i;
        pNew->pNext = NULL;
        tail->pNext = pNew;
        tail = pNew;
        first.push(pNew);
    }
    recurse(head);
#if 0
    while (!first.empty())
    {
        pNode = first.top();
        cout << pNode->value << "  ";
        first.pop();
    }
    
#endif
    return 0;
}

