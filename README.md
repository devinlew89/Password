# Password
Password Final

Synopsis:

Passwords are to argue one of the most important things to all people of the world. Security is a tool we use to protect ourselves from people whom wish to harm us by accessing these accounts. This program shows password structure and how a passcode can simply run in the back and still provide security. We put in a two dimensional array to for use for multiple users.


Code Example:

while(username.length()<8 || username.length()>=8 )
    {

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

Motivation:

   All people want to know they are secure for the rest of their life. Making sure that everything in life is secure to the best of our ability. I don’t like that there are people out there that would take from you what you worked so hard to create. Security online is just like a key to your home so it’s important to keep in mind the access people can get by not having better or more complex password systems available. The above is only a simple username/password file made with C++. 

 
Test:

 Program will ask for username. You can put in the username the array listing. If the username is not correct it will ask you for the correct path. Next the program will ask you for the password. To move on enter the correct path.  If incorrect it will ask you again for the password. This is all repeated for the passcode an extra and well needed added level of security. Put in all the codes from the array section to get the code to run. Use other codes to get other options to appear. Wrong answers will be displayed and have you repeat the process. 




Swatc
