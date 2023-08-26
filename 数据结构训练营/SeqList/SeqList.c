#include "SeqList.h"
#include <string.h>
#include <stdlib.h>
#include <assert.h>

// //-------------------静态-----------------------------
// // 增删查改等接口函数
// void SeqListInit(SL *ps)
// {
//     memset(ps->a, 0, sizeof(SQDataType) * MAX_SIZE);
//     ps->size = 0;
// }

// // 头插、尾插、头删、尾删
// void SeqListPushBack(SL * ps, SQDataType x)
// {
//     // 根据对size的初始化，目前size应该等于数组的长度
//     // 因此在数组中，它应该指向数组当前已写入数据的末尾
//     ps->a[ps->size] = x; 
//     ps->size++; 
// }

// void SeqListPushFront(SL * ps, SQDataType x);
// void SeqListPopBack(SL * ps);
// void SeqListPopFront(SL * ps);

// //-----------------------------------------------

// ----------------------动态---------------------------
void SeqListInit(SL *ps)
{
    ps->a = NULL;
    ps->size = 0;
    ps->capacity = 0;
}


// 打印
void SeqListPrint(SL * ps)
{
    for(int i = 0; i < ps->size; ++i)
    {
        printf("%d ", ps->a[i]);
    }
    printf("\n");
}

//malloc创建的空间，要去销毁
void SeqListDestory(SL * ps)
{
    free(ps->a);
    ps->a = NULL;
    ps->capacity = ps->size = 0;
} 



// 头插、尾插、头删、尾删

// 检查容量够不够，不够则去扩容
void SeqListCheckCapacity(SL *ps)
{
    // 如果满了，就需要扩容
    if(ps->size == ps->capacity)
    {
        //不够则扩容，一开始先判断容量是否为非0值，为0则去更改它为非0值
        int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
        SQDataType * tmp = (SQDataType *)realloc(ps->a, newcapacity * sizeof(SQDataType));
        if(tmp == NULL)
        {
            printf("realloc failed\n");
            exit(-1);
        }
        else
        {
            ps->a = tmp;
            ps->capacity = newcapacity;// 如果capac = 0;那么会出现问题。故添加变量newcapacity
        }
    }

}


// 尾插
void SeqListPushBack(SL * ps, SQDataType x)
{
    SeqListCheckCapacity(ps);
    ps->a[ps->size] = x;
    ps->size++;
}

// 头插
void SeqListPushFront(SL * ps, SQDataType x)
{
    // 1、初始条件
    // 2、结束条件
    // 3、迭代过程
    // tips：也可能和尾插一样，出现容量不足的问题
    SeqListCheckCapacity(ps);
    // 需要结合图形来看
    //图片中end指向的是最后的结果
    // end一开始指向数组已有数据的下一位：size-1
    int end = ps->size - 1;
    while (end >= 0)    // 如果end指向数组第一个元素的前一个元素，则停止循环
    {
        ps->a[end + 1] = ps->a[end];
        --end;
    }

    ps->a[0] = x;
    ps->size++;

}

//尾删
void SeqListPopBack(SL * ps)
{
    // 这句话的作用是使用断言（assert）函数来检查条件是否为真。
    // 断言是一种用于调试和测试的编程工具，用于在程序中检查某个条件是否满足。
    // 如果断言的条件为真，程序会继续执行；但如果条件为假，断言函数会中断程序的执行，并输出错误消息。
    // 在给定的例子中，断言语句 assert(ps->size > 0); 
    // 用于检查指针 ps 所指向的结构体或对象的 size 成员是否大于零。
    // 如果 size 小于或等于零，断言会触发，程序会中断，并输出相关的错误信息。
    assert(ps->size > 0);

    // ps->a[ps->size - 1] = 0; //万一元素本来就是0呢，那这步操作无效
    ps->size--;

}

// 头删
void SeqListPopFront(SL * ps)
{
    int start = 1;
    while (start < ps->size)
    {
        ps->a[start - 1] = ps->a[start];
        ++start;
    }
    ps->size--;
}


// 任意位置插入
void SeqListInsert(SL * ps, int pos, SQDataType x)
{
    assert(pos < ps->size); // 不能从末尾插入

    //检查容量
    SeqListCheckCapacity(ps);

    int end = ps->size - 1;
    while (end >= pos)
    {
        ps->a[end + 1] = ps->a[end];
        --end;
    }
    ps->a[pos] = x;
    ps->size++;
}


// 任意位置删除
void SeqListErase(SL * ps, int pos)
{
    assert(pos < ps->size); // 不能删除没有值的数组元素
    int start = pos + 1;
    while (start < ps->size)
    {
        ps->a[start - 1] = ps->a[start];
        ++start;
    }
    ps->size--;
}

//查找
int SeqListFind(SL * ps, SQDataType x)
{
    for(int i = 0; i < ps->size; ++i)
    {
        if(ps->a[i] == x)
        {
            return i;
        }
    }

    return -1;
}


// 修改
void SeqListModify(SL * ps, int pos, SQDataType x)
{
    assert(pos < ps->size);
    ps->a[pos] = x;
}




