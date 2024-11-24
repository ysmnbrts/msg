#include "basemessage.h"

#ifndef VOTE
#define VOTE

class vote : public Basemessage
{
    private:
    string title ; 
    string option[10]; 

    public:
    vote(string id , string title_t , string *option_t) : Basemessage(id) {}

    string* getoptions();

    string gettitle();

    void printMessage() const ;

};

#endif