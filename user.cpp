#include<iostream>
#include<string>
using namespace std;

class user
{
    private:
        string name;
        string password; 
        static int usersNumber;
        string id;
        static int database[2][2];
    public:
        user(string nam , string pass , string idd)
        {
            name = nam;
            password = pass ;
            usersNumber++; 
            id = idd;
        }

        string getid() const
        {
            return id;
        }

        static user* login(string username , string password , string id, string *database[2])
        {
            for(int i = 0 ; i < usersNumber ; i++)
            {
                cout << database[i][0] << "     " <<  database[i][1] << endl;
                if(username == database [i][0])
                {                    
                    if(password == database[i][1])
                    {
                        user * temp = new user(username , password , id) ;

                        return temp;
                    }
                    return nullptr;
                }
            }
            return nullptr;
        }   
};
int user :: usersNumber = 0;

