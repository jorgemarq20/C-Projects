#ifndef TIME_H
#define TIME_H


class Time
{
    public:
        Time(unsigned short, unsigned short);
        void print ();
        Time operator++ ();
    private:
        unsigned short minutes, seconds;
};

#endif // TIME_H
