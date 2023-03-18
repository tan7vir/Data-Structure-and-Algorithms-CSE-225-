#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
class TimeStamp
{
    public:
        TimeStamp();
        TimeStamp(int,int,int);
        bool operator==(TimeStamp&);
        bool operator!=(TimeStamp&);
        bool operator>(TimeStamp&);
        bool operator<(TimeStamp&);
        void Print();
    private:
        int time[3];
};


#endif // TIMESTAMP_H_INCLUDED
