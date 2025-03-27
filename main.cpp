#include <iostream>
#include <string>
#include <game.h>
#include <pho.h>

int main(int, char **)
{

    // Example usage of pho library
    PHONE phone("4376622+956", "BD"); // Initialize the pho library
    Game mygame;

    mygame.setlevel(2);

    mygame.setname("cas");

    mygame.start();

    phone.call();

    phone.message();

    return 0;
}
