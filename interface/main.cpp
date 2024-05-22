#include "Foot.hpp"
#include "Combat.hpp"
#include "Strategie.hpp"
#include <iostream>

using namespace std;

int main()
{
    int choice;
    Combat combat = Combat();
    Foot foot = Foot();
    Strategie strat = Strategie();
    
    cout << "choisissez un jeu" << endl;
    cout << "1-Combat\n2-Foot\n3-Strategie" << endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            combat.start();
            break;
        case 2:
            foot.start();
            break;
        case 3:
            strat.start();
            break;
        default:
            cout << "Ce choix n'existe pas" << endl;
            break;
    }
    return 0;
}