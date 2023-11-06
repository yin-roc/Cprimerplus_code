//
// Created by yin on 2023-11-06.
//

#ifndef INC_15_1_15_3_TV_H
#define INC_15_1_15_3_TV_H


class Tv {
public:
    enum{Off, On};
    enum{MinVal, Maxval = 20};
    enum{Antenna, Cable};
    enum{TV, DVD};
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
public:
    Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV){}
    void onoff(){state = (state == On) ? Off : On;}
    bool ison() const {return state == On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() {mode = (mode == Antenna) ? Cable : Antenna;}
    void set_input() {input = (input == TV) ? DVD : TV;}
    void settings() const;
    friend class Remote;
};

class Remote{
private:
    int mode;
public:
    Remote(int m = Tv::TV) : mode(m) {}
    bool volup(Tv & t) { return t.volup();}
    bool voldown(Tv & t) { return t.voldown();}
    void onoff(Tv & t) { t.onoff();}
    void chanup(Tv & t) { t.chanup();}
    void chandown(Tv & t) { t.chandown();}
    void set_chan(Tv & t, int c) { t.channel = c;}
    void set_mode(Tv & t) { t.set_mode();}
    void set_input(Tv & t) { t.set_input();}
};

#endif //INC_15_1_15_3_TV_H
