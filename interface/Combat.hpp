#ifndef COMBAT
#define COMBAT

#include "Jeux.hpp"

class Combat: public Jeux
{
    public:
        Combat();
        ~Combat();
        void start();
        void quit();
        void pause();
        void play();
        void restart();
        int menu();
        int dodge();
    protected:
        int state;
        int life;
        int opponent;
};

#endif