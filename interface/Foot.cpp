#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Foot.hpp"

using namespace std;

Foot::Foot()
{

}

Foot::~Foot()
{

}

int Foot::menu()
{
    int choice;
    cout << "1-restart\n2-play\n3-quit" << endl;
    cin >> choice;
    return (choice);
}

void Foot::play()
{
    cout << "play" << endl;
}

void Foot::quit()
{
    state = 1;
}

void Foot::restart()
{
    cout << "Recommencer le jeu" << endl;
    score = 0;
    tentative = 0;
}

void Foot::pause()
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

int Foot::tir()
{
    int choice;
    cout << "Tirer" << endl;
    cout << "0-gauche\n1-droite" << endl;
    cin >> choice;
    return (choice);
}

void Foot::start()
{
    srand(time(NULL));
    score = 0;
    tentative = 0;
    state = 0;
    cout << "Le match commence" << endl;
    while (state == 0 && tentative < 10)
    {
        int val = rand()%2;
        tentative++;
        if(tir() == val)
        {
            score++;
            cout << "Vous avez marqué" << endl;
        }
        else
        {
            cout << "Vous n'avez pas marqué" << endl;
        }
        if(tentative == 10)
        {
            cout << "temps écoulé. Votre score est de: " << score << endl; 
        }
        pause();
    }
}