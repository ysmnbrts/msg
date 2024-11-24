#include "basemessage.h"
#include "simplemessage.h"
#include "postmessage.h"
#include "user.cpp"
#include <iostream>
#include <string>
#include "vote.h"
#include "quiz.h"
using namespace std;

//user * loginUser;
int main()
{
    string **database;
    database= new string*[10];
    for (size_t i = 0; i < 10; i++)
    {
        database[i]=new string[2];
    }


    database[0][0]= "yasamin";
    database[0][1]= "9876";

    database[1][0]= "sinobh";
    database[1][1]= "123456"; 
    
    cout<<"esm karabar val ro vared kon(yasamin)"<<endl;
    string s1 ;
    cin>>s1;

    cout<<"ramz karbar 1 ra vared kon :(9876)";
    string p1;
    cin>>p1;

    user* user1=user::login(s1,p1, "khorous1", database);
    if(!user1)
    {cout<<"wrong";
    return 0 ;
    }

    cout<<"esm karabar do ro vared kon(sinobh)"<<endl;
    string s2 ;
    cin>>s2;

    cout<<"ramz karbar 2 ra vared kon :(123456)";
    string p2;
    cin>>p2;


    user* user2=user::login(s2,p2, "khorous2", database);
    if(!user2)
    {
        cout<<"wrong";
        return 0;
    }
    Basemessage *arr = new Basemessage[100];
    

    while(1)
    {
        cout<<"c p?"<<endl;

        cout << "1. simple\n2. post\n  0.  break" <<endl<<"3.  vote" << endl;

        int entekhab;
        cin >> entekhab;

        if (entekhab == 1)
        {
            cout<<"matn ra vared kon"<<endl;
            string s;
            cin>>s;
            simplemessage payam1(user1->getid(), s);

            arr[payam1.count]= payam1; 
        }

        if(entekhab == 2)
        {
            cout <<"matn ra vared kon"<<endl;
            string s ;
            cin>> s;
            cout<<"maten2 yani aks ra vared kon"<<endl;
            string p;
            cin>>p;
            postmessage post(user1->getid() , p , s);

            arr[post.count]= post; 
        }

        if(entekhab == 3)
        {
            cout<<"title ra varad kon"<<endl;
            string t;
            cin>>t;
            cout<<"chand ta option?(hadeaksar 10)"<<endl;
            int x;
            cin>>x;

            string *arr1 = new string [x];
            for (int i = 0; i < x ; i++)
            {
                string op;
                cin >> op;
                arr1[i] = op;
            }
            vote votee(user1->getid(), t , arr1);

            arr[votee.count] = votee; 
        }

        if(entekhab== 4)
        {
            cout << "title ra vared kon" <<endl; 
            string t ;
            cin>>t;

            cout<<"chand ta option?(hadeaksar 10)"<<endl;
            int x;
            cin>>x;

            cout<<"gozine dorost"<<endl;
            int y;
            cin>>y;

            string *arr2 = new string [x];
            for (int i = 0; i < x ; i++)
            {
                string op;
                cin >> op;
                arr2[i] = op;
            }
            quiz quizz( user1->getid() , t , arr2 , y);

            arr[quizz.count] = quizz; 
        }

        if(entekhab == 0)
        {
            break;
        }
    }

    for(int i =0 ; i<count ; i++)
    {
        arr[i].printmessage();
    }
}
