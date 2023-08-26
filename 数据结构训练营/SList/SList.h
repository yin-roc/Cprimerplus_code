#ifndef __SLIST_H__
#define __SLIST_H__
#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;

struct SListNode
{
    SLTDataType data;
    struct SListNode *next; // 结构体里面不能定义自己的结构体，因此不能struct SListNode next
};

typedef struct SListNode SLTNode;

void SListPrint(SLTNode* phead);

// 头插
void SListPushBack(SLTNode** pphead, SLTDataType x);
// 尾插
void SListPushFront(SLTNode* phead, SLTDataType x);


#endif // !__SLIST
