#include "basemessage.h"
#include "simplemessage.h"
#include "postmessage.h"
#include "user.cpp"
#include <iostream>
#include <string>
#include "vote.h"
using namespace std;

#ifndef QUIZ
#define QUIZ

class quiz : public vote
{
    private :
    int javabedorost;

    public :
    quiz( string id , string title_t , string *option_t, int javabe_dorost ) : vote(id , title_t , option_t)
    {
        javabedorost = javabe_dorost ;

    }

    int getjavab() const
    {
        return javabedorost ; 
    }

};
#endif