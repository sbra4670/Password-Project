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
    }
}

#endif