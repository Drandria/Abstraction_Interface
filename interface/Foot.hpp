#ifndef FOOT
#define FOOT

#include "Jeux.hpp"

class Foot: public Jeux
{
    public:
        Foot();
        ~Foot();
        void start();
        void quit();
        void pause();
        void play();
        void restart();
        int menu();
        int tir();
    protected:
        int state;
        int tentative;
        int score;
};

#endif