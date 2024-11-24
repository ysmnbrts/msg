#include "simplemessage.h"
#include "basemessage.h"

simplemessage :: simplemessage (string id , string mat): Basemessage(id)
{
    this->matn = mat;
}

string simplemessage::getmatn()
{
    return matn;
}
