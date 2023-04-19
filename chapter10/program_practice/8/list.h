#ifndef __LIST_H__
#define __LIST_H__

typedef unsigned int Item;

class List
{
    private:
        static const int ArSize = 20;
        Item items[ArSize];
    public:
        // List()
        List();
        void Add(Item n);
        void isempty();
        void isfull();
        
};

#endif