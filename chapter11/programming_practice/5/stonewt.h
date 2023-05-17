#ifndef STONEWT_H__
#define STONEWT_H__

class Stonewt
{
    public:
        enum Type {STONE, POUNDS, FLOATPOUNDS};
    private:
        static const int Lbs_per_stn = 14;
        int stone;
        double pds_left;
        double pounds;
        Type type;

    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();
        ~Stonewt();
        
        void  Set_Type(Type m);

        Stonewt operator+(const Stonewt & add) const;
        Stonewt operator-(const Stonewt & min) const;
        Stonewt operator*(const double n) const;
        // friend Stonewt operator*(const double n, const Stonewt & mult);
        friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};

#endif