#ifndef Password_hpp
#define Password_hpp

#include <iostream>
#include <String>

using namespace std;

int enterPassword()
{
    string Password = "54321";
    string input;
    cout << "Enter Your Password: " << flush;
    cin >> input;
    cout<< "'" << input << "'" << endl;

    if(input == Password)
    {
       cout << "Access Granted." << endl;
    }

    if (input != Password)
    {
        cout << "Access Denied." << endl;
        cout << "Try Again:"<< endl;
        cin >> input;
        cout << "Try one last time:" << endl;
        cin >> input;
        cout << "You have attempted to enter the password too many times" << endl;
    }
}

#endif