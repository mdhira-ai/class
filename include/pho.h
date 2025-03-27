#if !defined(PHO_H)
#define PHO_H
#include <iostream>

using namespace std;


class PHONE{
    private:
        string phonenumber;
        string country;

    public:
        PHONE(string phonenumber, string country);

        void call();

        void message();

        ~PHONE();

};


#endif // PHO_H
