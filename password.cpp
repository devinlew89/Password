#include<iostream>
#include<string>

using namespace std;

int main()
{


    //strings in which user will enter username and password
    string username,password,passcode;

    //arrays
    string login [3][3]={{"tntuser1","23456789","98765432"},
                            {"tntuser2","34567890","09876543"},
                            {"tntuser3","45678901","10987654"}};


    bool userMatch=false;
    while(username.length()!=8 || userMatch == false)
    {

        cout<<"Enter Your Username(Numbers/Letters):";
        cin>>username;

        int x;
        for(x=0;x<4;x++)
        {
            if(username == login[x][0])
            {
                userMatch=true;


            }

        }
        if (userMatch==false)
        {
            cout<< "Username Not Found, Try Again:\n";
        }

    }

    bool wordMatch=false;
    while(password.length()!=8 || wordMatch == false)
    {

        cout<<"Enter Your Password(Numbers):";
        cin>>password;
        int y;
        for( y=0;y<4;y++)
        {
            if(password == login[y][1])
            {
                wordMatch=true;


            }

        }
        if (wordMatch==false)
        {
            cout<< "Password Not Found, Try Again:\n";
        }

    }

    bool codeMatch=false;
    while(passcode.length()!=8 || codeMatch == false)
    {

        cout<<"Enter Your Passcode(Numbers):";
        cin>>passcode;
        int z;
        for(z=0;z<4;z++)
        {
            if(passcode == login[z][2])
            {
                codeMatch=true;


            }

        }
        if (userMatch==false)
        {
            cout<< "Username Not Found, Try Again:\n";
        }

    }
            system("Pause");
            return 0;

}
