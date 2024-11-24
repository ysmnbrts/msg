#include "basemessage.h"
#include "simplemessage.h"

#ifndef POST
#define POST

class postmessage : public simplemessage
{
    private:
    string path;

    public:
    postmessage(string id , string impath , string message);

    string getmath() const;

    void printpost () const;
};

#endif