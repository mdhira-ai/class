#if !defined(GAME_H)
#define GAME_H
#include <iostream>

using namespace std;

class Game
{
private:
    /* data */
    string name;
    int level;

public:
    void setname(string name);
    void setlevel(int level);

    void start();

    ~Game();
};

#endif // GAME_H
