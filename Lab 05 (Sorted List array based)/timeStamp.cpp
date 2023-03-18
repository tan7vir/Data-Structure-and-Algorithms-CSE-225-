#include"timeStamp.h"
#include<iostream>
using namespace std;
TimeStamp::TimeStamp()
{
    time[0]=0;
    time[1]=0;
    time[2]=0;
}
TimeStamp::TimeStamp(int ss,int mm,int hh)
{
    time[0]=ss;
    time[1]=mm;
    time[2]=hh;
}
bool TimeStamp::operator==(TimeStamp &a) {
    return time[0]==a.time[0] && time[1]==a.time[1] && time[2]==a.time[2];
}
bool TimeStamp::operator!=(TimeStamp &a) {
    return time[0]!=a.time[0] || time[1]!=a.time[1] || time[2]!=a.time[2];
}
bool TimeStamp::operator>(TimeStamp &a)
{
    if(time[2]>a.time[2])
        return true;
    else if(time[2]<a.time[2])
        return false;
    else
        if(time[1]>a.time[1])
            return true;
        else if(time[1]<a.time[1])
            return false;
        else
            if(time[0]>a.time[0]) return true;
            else return false;
}
bool TimeStamp::operator<(TimeStamp &a)
{
    if(time[2]<a.time[2])
        return true;
    else if(time[2]>a.time[2])
        return false;
    else
        if(time[1]<a.time[1])
            return true;
        else if(time[1]>a.time[1])
            return false;
        else
            if(time[0]<a.time[0]) return true;
            else return false;
}
void TimeStamp::Print()
{
    cout<<(time[0]<10?"0":"")<<time[0]<<":";
    cout<<(time[1]<10?"0":"")<<time[1]<<":";
    cout<<(time[2]<10?"0":"")<<time[2]<<"\n";
}
