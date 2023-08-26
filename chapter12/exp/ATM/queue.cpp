#include "queue.h"
#include <cstdlib>

Queue::Queue(int qs):qsize(qs)
{
    front = rear = NULL;
    items = 0;
    // qsize = qs;
}

// 500的队伍，却只有300张的票，剩下的200人已经占用了内存空间，但是没有去delete他们，导致内存空间的浪费
Queue::~Queue()
{
    Node* temp;
    while(front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::queuecount() const
{
    return items;
}

bool Queue::enqueue(const Item& item)
{
    if(isfull())
        return false;
    
    Node *add = new Node;
    add->item = item;
    add->next = NULL;
    items++;

    if(front == NULL) // 以防一开始队列是空的
    {
        front = add;
    }
    else
    {
        rear->next = add;
    }
    rear = add; // 尾指针应该指向现在的add指针
    return true;
}

bool Queue::dequeue(Item &item)
{
    if(front == NULL)
        return false;

    item = front->item; //出队列
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;

    if(items == 0)
    {
        rear = NULL;
    }
    return true;
}

void Customer::set(long when)
{
    arrive = when;
    processtime = rand() % 3 + 1;
}


