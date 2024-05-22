#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Strategie.hpp"

using namespace std;

Strategie::Strategie()
{

}

Strategie::~Strategie()
{

}

int Strategie::menu()
{
    int choice;
    cout << "1-restart\n2-play\n3-quit" << endl;
    cin >> choice;
    return (choice);
}

void Strategie::play()
{
    cout << "play" << endl;
}

void Strategie::quit()
{
    state = 1;
}

void Strategie::restart()
{
    cout << "Recommencer le jeu" << endl;
    point = 0;
}

void Strategie::pause()
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

int Strategie::continuer()
{
    int choice;
    cout << "1-ajouter\n2-ne plus ajouter" << endl;
    cin >> choice;
    return (choice);
}

void Strategie::start()
{
    srand(time(NULL));
    point = 0;
    state = 0;
    cout << "Essayer de ne pas dépasser 21" << endl;
    while (state == 0)
    {
        int val = rand()%15;
        if(continuer() == 1)
        {
            point += val;
            cout << "Vous êtes maintenant à: " << point << endl;
            if(point > 21)
                {
                    cout << "Vous avez perdu" << endl;
                    restart();
                }
            else
            {
                pause();
            }
        }
        else
        {
            cout << "Vous avez gagné avec un score de: " << point << endl;
            restart();
        } 
    }
}