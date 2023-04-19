#ifndef __MOVE_H__
#define __MOVE_H__

class Move
{
    private:
        double x;
        double y;
    public:
        Move(double a = 0, double b = 0);
        void showmove() const;
        Move add(const Move & m);
        void reset(double a = 0, double b = 0);
};

#endif