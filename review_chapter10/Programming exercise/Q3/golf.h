#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
    private:
        static const int Len = 40;
        char fullname[Len];
        int handicap;
    public:
        Golf(const char * m_fullname, int m_handicap);
        Golf();
        ~Golf();
        void set_handicap(int hc);
        void showGolf() const;

};

#endif