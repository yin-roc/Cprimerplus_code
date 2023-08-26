#ifndef __SEQLIST_H__
#define __SEQLIST_H__ 

#include <stdio.h>

#define MAX_SIZE 10
typedef int SQDataType;

// //方便及时修改数组类型和元素个数
// // 顺序表的静态存储，如果数组满了，需要手动增加数组元素个数
// typedef struct seqlist
// {
//     SQDataType a[MAX_SIZE];
//     int size;
// }SL;


// 顺序表的动态存储
typedef struct seqlist
{
    SQDataType * a; // 指向动态开辟的数组
    int size;       // 有效数据的个数
    int capacity;   // 容量
}SL;


// 增删查改等接口函数
void SeqListInit(SL * ps);

void SeqListPrint(SL * ps);

void SeqListDestory(SL * ps);   //malloc创建的空间，要去销毁

// 判断容量是否还足够，不够则扩容
void SeqListCheckCapacity(SL *ps);

// 头插、尾插、头删、尾删
void SeqListPushBack(SL * ps, SQDataType x);
void SeqListPushFront(SL * ps, SQDataType x);
void SeqListPopBack(SL * ps);
void SeqListPopFront(SL * ps);
void SeqListInsert(SL * ps, int pos, SQDataType x);    // 任意位置插入
void SeqListErase(SL * ps, int pos);     // 任意位置删除

// 查找
int SeqListFind(SL * ps, SQDataType x);
void SeqListModify(SL * ps, int pos, SQDataType x);


#endif //  __SEQLIST_H__
