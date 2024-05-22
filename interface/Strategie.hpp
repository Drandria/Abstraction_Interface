#ifndef STRAT
#define STRAT

#include "Jeux.hpp"

class Strategie: public Jeux
{
    public:
        Strategie();
        ~Strategie();
        void start();
        void quit();
        void pause();
        void play();
        void restart();
        int menu();
        int continuer();
    protected:
        int state;
        int point;
};

#endif