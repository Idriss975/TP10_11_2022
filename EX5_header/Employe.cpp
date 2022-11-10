#include "Employe.h"

Employe::Employe(std::string &&n, std::string &&p, float &&s)
{
    nom = n;
    prenom = p;
    salaire = s;
}