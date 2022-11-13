#include <iostream>
#include "EX5_header/Employe.h"
using namespace std;

int main()
{   
    uint16_t choix;
    string nom;
    string pren;
    float sal;

    static std::vector<Employe> ListeEmps;
    while (true)
    {
        cout << "1. Ajouter un employee\n2. Afficher la liste\n3. Rechercher un employe\n4. Quitter\n> ";
        cin >> choix;
        switch (choix)
        {
        case 1:
            cout << "Nom d'employe:\n> ";
            cin >> nom;
            cout << "Prenom d'employe\n> ";
            cin >>pren;
            cout << "Son salaire:\n > ";
            cin >> sal;
            ListeEmps.push_back(Employe(nom, pren, sal));
            break;

        case 2:
        cout << "Liste des employees:\n";
            for (vector<Employe>::iterator i = ListeEmps.begin(); i != ListeEmps.end(); i++)
                i ->Afficher_infos();
            break;

        case 3:
            cout << "Nom d'Employe a rechercher.\n> ";
            cin >> nom;

            cout << "Liste des employés:\n";
            for (vector<Employe>::iterator i = ListeEmps.begin(); i != ListeEmps.end(); i++)
                if (i -> getNom() == nom)
                    i ->Afficher_infos();
            break;
        
        case 4:
            goto Exit_loop;
            break;
        default:
            throw exception("Unexpected input.");
            break;
        }
    }
    Exit_loop:;
    return 0;
}