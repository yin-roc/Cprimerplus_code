#ifndef __PLORG_H__
#define __PLORG_H__

class Plorg
{
    static const int SIZE = 19;
    private:
        char p_name[SIZE];
        int CI;
    public:
        Plorg(const char m_p_name[], int m_CI = 50);
        Plorg(const char* m_p_name = "Plorga");
        void setCI(int m_CI);
        void plorgshow() const;
};

#endif // 