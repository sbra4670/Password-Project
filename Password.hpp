#ifndef Password_hpp
#define Password_hpp

#include <iostream>
#include <String>

using namespace std;

string enterPassword()
{
    string Password = "54321";
    string input;
    cout << "Enter Your Password: " << flush;
    cin >> input;
}

#endif