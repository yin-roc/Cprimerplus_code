#ifndef __STACK_H__
#define __STACK_H__

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
    private:
        enum {MAX = 10};
        Item items[MAX];
        int top;
    public:
        Stack();
        bool isEmpty() const;
        bool isfull() const;
        bool push(const Item& item);
        bool pop(Item& item);
};

#endif // !