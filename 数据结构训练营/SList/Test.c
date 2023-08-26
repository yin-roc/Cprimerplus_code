#include <stdio.h>
#include "SList.h"

void TestSList()
{
    SLTNode *plist = NULL;
    SListPushBack(&plist, 1);
    SListPushBack(&plist, 2);
    SListPushBack(&plist, 3);
    SListPushBack(&plist, 4);
    SListPrint(&plist);
    
}


int main()
{


    return 0;
}