#include "basemessage.h"
#include "postmessage.h"
#include "simplemessage.h"

postmessage :: postmessage(string id , string impath , string message) : simplemessage(id , message )
{
    this ->path = impath;
}

string postmessage :: getmath() const
{
    return path;
}

void postmessage :: printpost () const
{
    cout<<this->path<<endl<<this->printId()<<this->gettime();
}