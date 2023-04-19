#ifndef GOLF_H_
#define GOLF_H_

// const int Len = 40;
class Golf
{
    private:
        static const int ArSize = 20;
        char fullname[ArSize];
        int handicap;
    public:
    Golf(const char * name, int hc);
    Golf();
    int setgolf();
    void Handicap(int hc);
    void showgolf() const;


};

#endif