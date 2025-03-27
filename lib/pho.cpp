#include "pho.h"

PHONE::PHONE(string phonenumber, string country)
{
    this->phonenumber = phonenumber;
    this->country = country;
}

void PHONE::call()
{
    cout << "calling to " << phonenumber << "\n";
}

void PHONE::message()
{
    cout << "sending message to " << phonenumber << "\n";
}

PHONE::~PHONE(){
    
}
