#include "vote.h"
#include "basemessage.h"
#include "simplemessage.h"
#include "postmessage.h"
#include "user.cpp"
#include <iostream>
#include <string>

vote :: vote(string id , string title_t , string *option_t) : Basemessage(id) 
{
    this->title = title_t;

    for (int i = 0; i < 10; i++)
    {
        this->option[i] = option_t[i];
    }
}

string* vote :: getoptions()
{
    return this->option;
}


string vote :: gettitle()
{
    return this->title ;
}

void vote:: printMessage() const
{
    cout <<this->title <<endl;
    for(int i = 0; i < 10; i++)
    {
        cout << option[i] <<endl;
    }

}
