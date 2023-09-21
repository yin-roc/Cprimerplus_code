
class nifty
{
    char personality[]; // 此处应该是定义一个字符串指针：char * personality;
    int talents;
    nifty();
    nifty(char *s);
    ostream & operator<<(ostream & os, nifty & n); // 应该定义为一个友元函数：
    //  friend ostream & operator<<(ostream & os, nifty & n); 
};

nifty::nifty()
{
    personality = NULL; // C语言里面用NULL，C++里面应该用0、'\0'或者C++11标准里面的nullptr
    talents = 0;
}

nifty::nifty(char *s)
{
    personality = new char[strlen(s)]; // 应该长度设置为 strlen(s)+1，多余的位置放置'\0'，以表示字符串的结束

    personality = s; // 两个char型的复制应该用到 strcpy(personality, s);
    talents = 0;
}

ostream & nifty::operator<<(ostream & os, nifty & n) // using namesapce std;或者 using std::ostream
{
    os << n; // 这里应该是具体的操作，否则该函数会无限制的调用函数本身
    // 可改为：os << n.personality << n.talents; 
}