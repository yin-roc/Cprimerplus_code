#ifndef __QUEUE_H__

#include <iostream>

using namespace std;

class Customer
{
    private:
        long arrive; // 客户操作 ATM 的开始时间
        int processtime; // 客户操作 ATM 经过的时间；

    public:
        Customer(){arrive = processtime = 0;}
        void set(long when); // 设置几点开始操作ATM机，以及操作时间
        long when() const{return arrive;}; // 查询操作,什么时候开始操作的
        int ptime() const{return processtime;}; // 操作了多长时间  
};

typedef Customer Item;

class Queue
{
    private:
        enum{Q_SIZE = 10};
        struct Node
        {
            Item item;
            struct Node* next;
        };
        Node *front; // 指向队头
        Node *rear; // 指向队尾
        int items; // 队列里面有多少人
        const int qsize; // 队列的最大值
    
    public:
        Queue(int qs = Q_SIZE); // 排队人数，默认是队列最长长度
        ~Queue();
        bool isempty() const; // 队列是否空
        bool isfull() const;
        int queuecount() const; // 队列长度计数
        bool enqueue(const Item &item); // 入队列成不成功
        bool dequeue(Item &item); // 出队列成不成功

};

#endif // !__QUEUE_H__