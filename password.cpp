#include<iostream>
#include<string>

using namespace std;

int main()
{//Username and Password.Also passcode.
    const string Username="us3rnam3";
    const string Password="12345678";
    const string Passcode="87654321";
    //strings in which user will enter username and password
    string username,password,passcode;




	// Prompting user to input username
    while(username.length()<8 || username.length()>=8 )
    {

    cout<<"Enter Your Username(Numbers/Letters):\n";
    cin>>username;

        if(username == "us3rnam3")
        {

            cout<<"Enter Password(Numbers/Letters):";
            cin>>password;
            break;

        }
        else
        {
             cout <<"Username incorrect.Please try again\n";
        }
    }



		//promprting user for password
    while(password.length()<8 || password.length()>=8 )
    {
            if(password == "12345678" )
            {
               if(username==Username&&password==Password);
                {

                    cout<<"Welcome, almost done, we need some more information to make sure you are secure."<<endl;
                    break;
                }

            }

            else
            {
                 cout<<"Password incorrect.Please Re-enter\n";

                    cout<<"Enter Password(Numbers/Letters):";
                    cin>>password;


            }
    }
    		//promprting user for passcode
    while(passcode.length()<8 || passcode.length()>=8 )
    {
        cout<<" Enter Your Passcode(Numbers):\n";
        cin>>passcode;

        if(passcode == "87654321")
        {
            if(passcode==Passcode);
            {

            cout <<"Welcome!\n"<<endl;
            break;

            }
        }
        else
        {
            cout <<"Passcode incorrect.One last attempt. \n";
            cout<<"Enter Passcode(Numbers):";
            cin>>passcode;


        }



    }






            system("Pause");
            return 0;

}
