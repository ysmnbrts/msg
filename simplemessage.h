#include "basemessage.h"

#ifndef SIMPLE
#define SIMOLE

class simplemessage : public Basemessage
{
    private :
    string matn ;

    public :
    simplemessage(string id , string mat);

    string getmatn();

    void printmessage () const override
    {
        cout<<this->printId()<<matn<<endl<<this->gettime();
    }
};

#endif ;