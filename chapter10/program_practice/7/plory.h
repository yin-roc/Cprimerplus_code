#ifndef __PLORY_H__
#define __PLORY_H__

class Plory
{
    private: 
        static const int ArSize = 20;
        // enum {ArSize = 20};
        char name[ArSize];
        int CI;
    public:
        Plory(const char ar[], int m_CI = 50);
        void set_CI(int m_CI);
        void showplory() const;
        Plory();

};

#endif