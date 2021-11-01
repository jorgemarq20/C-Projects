#ifndef STOPWATCH_H
#define STOPWATCH_H


class stopwatch
{
    public:
        stopwatch(unsigned short, unsigned short);
        stopwatch operator-- ();
        void print();
        unsigned short getMinutes () {return minutes}
        unsigned short getSeconds () {return seconds;}

    private:
        unsigned short minutes, seconds;
};

#endif // STOPWATCH_H
