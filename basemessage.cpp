#include "basemessage.h"

Basemessage::Basemessage(string x) //oon adami ke payam mide ki
{
    senderId = x;
    sentDate = Time();
    count++;
}

string Basemessage::printId() const
{
    return this->senderId;
}


Time Basemessage::printDa() {

    return this->sentDate;

}

