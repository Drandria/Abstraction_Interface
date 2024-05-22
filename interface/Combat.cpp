#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Combat.hpp"

using namespace std;

Combat::Combat()
{

}

Combat::~Combat()
{

}

int Combat::menu()
{
    int choice;
    cout << "1-restart\n2-play\n3-quit" << endl;
    cin >> choice;
    return (choice);
}

void Combat::play()
{
    cout << "play" << endl;
}

void Combat::quit()
{
    state = 1;
}

void Combat::restart()
{
    cout << "Recommencer" << endl;
    life = 100;
    opponent = 100;
}

void Combat::pause()
{
    cout << "Jeu en Pause" << endl;
    switch(menu())
    {
        case 1:
            restart();
            break;
        case 2:
            play();
            break;
        default:
            quit();
            break;
    }
}

int Combat::dodge()
{
    int choice;
    cout << "Esquiver" << endl;
    cout << "0-gauche\n1-droite" << endl;
    cin >> choice;
    return (choice);
}

void Combat::start()
{
    srand(time(NULL));
    life = 100;
    opponent = 100;
    state = 0;
    cout << "Le combat commence" << endl;
    while (state == 0)
    {
        int val = rand()%2;
        int damage = rand()%101;
        if(dodge() == val)
        {
            life -= damage;
            cout << "Vous n'avez pas esquivé" << endl;
            if(life <= 0)
            {
                cout << "Vous êtes mort.\nVous avez perdu" << endl;
                restart(); 
            }
            else
            {
                cout << "Il vous reste " << life << " points de vie" << endl;
                pause();
            }
        }
        else
        {
            opponent -= damage;
            cout << "Vous avez esquivé" << endl;
            if(opponent <= 0)
            {
                cout << "Votre adversaire est mort.\nVous avez gagné" << endl;
                restart();
            }
            else
            {
                cout << "Il reste à votre adversaire " << opponent << " points de vie" << endl;
                pause();
            }
        }
    }
}