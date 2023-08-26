#include "SList.h"

void SListPrint(SLTNode* phead)
{
    SLTNode* cur = phead;
    while (cur != NULL)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }

    printf("NULL");
}

// // 问题2：这里的形参虽然是指针，但实参也是传入的指针，所以需要指向指针的指针
// void SListPushBack(SLTNode* phead, SLTDataType x)
// {
//     SLTNode * newnode = (SLTNode *)malloc(sizeof(SLTNode));
//     newnode->data = x;
//     newnode->next = NULL;

//     // 问题1：如果一开始phead传进来是一个空指针，则会报错;因此需要判断
//     if(phead == NULL)
//     {
//         phead = newnode;
//     }
//     else    // 尾插
//     {
//         SLTNode *tail = phead;
//         // 找到尾节点的指针
//         while (tail->next != NULL)
//         {
//             tail = tail->next;
//         }

//         // 尾节点，链接新节点
//         tail->next = newnode;
//     }
    
    
// }

// 问题2：修正如下
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
    SLTNode * newnode = (SLTNode *)malloc(sizeof(SLTNode));
    newnode->data = x;
    newnode->next = NULL;

    // 问题1：如果一开始phead传进来是一个空指针，则会报错;因此需要判断
    if(*pphead == NULL)
    {
        *pphead = newnode;
    }
    else    // 尾插
    {
        SLTNode *tail = *pphead;
        // 找到尾节点的指针
        while (tail->next != NULL)
        {
            tail = tail->next;
        }

        // 尾节点，链接新节点
        tail->next = newnode;
    }
    
    
}