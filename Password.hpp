#ifndef Password_hpp
#define Password_hpp

#include <iostream>
#include <String>
#include "Password.cpp"

using namespace std;

void enterPassword()
{
    cout << "Enter Your Password: " << flush;
    cin >> input;
}

#endif