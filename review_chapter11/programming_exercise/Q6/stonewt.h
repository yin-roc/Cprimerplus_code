#ifndef STONEWT_H__
#define STONEWT_H__

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();
        ~Stonewt();

        bool operator<(const Stonewt& s) const;
        bool operator<=(const Stonewt& s) const;
        bool operator>(const Stonewt& s) const;
        bool operator>=(const Stonewt& s) const;
        bool operator==(const Stonewt& s) const;
        bool operator!=(const Stonewt& s) const;


        void show_lbs() const;
        void show_stn() const;
};

#endif