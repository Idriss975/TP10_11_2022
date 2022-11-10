#include <iostream>
#include <vector>
#include "EX5_header/Employe.h"
using namespace std;

int main()
{
    vector<Employe> ListeEmps;
    
    bool Shutdown {false};
    while (!Shutdown)
    {
        uint16_t choix;
        cout << "1. Ajouter un employee\n2. Afficher la liste\n3. Rechercher un employe\n4. Quitter";
        cin >> choix;
        switch (choix)
        {
        case 1:
            
            ListeEmps.push_back();
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            Shutdown = true;
            break;
        default:
            throw exception("");
            break;
        }
    }
    return 0;
}