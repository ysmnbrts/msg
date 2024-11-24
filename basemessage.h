#include <iostream>
using namespace std;
#include <chrono>;

#ifndef BASSM
#define BASSM

class Time
{
    private :
        time_t t;
    public:
    Time()
    {
        auto now = std::chrono::system_clock::now();
        t = std::chrono::system_clock::to_time_t(now);
    }

    string gettime() const
    {
        return ctime(&t);
    }
    
};


class Basemessage 
{
    private:
    Time sentDate ;
    string senderId ;
    int girande ; //kasi ke payam ro migire
    public:
    static int count;
    Basemessage(string x);  //oon adami ke payam mide kie
    Basemessage()
    {
         
    }
    string printId() const;
    string gettime() const
    {
        return sentDate.gettime();
    }
    Time printDa();

    virtual void printmessage() const { };
};

static int count = 0 ;



#endif