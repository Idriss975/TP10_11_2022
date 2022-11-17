#include "Employe.h"
#include <iostream>

//std::vector<Employe> Employe::ListeEmps;
Employe::Employe(std::string n, std::string p, float s)
{
    nom = n;
    prenom = p;
    salaire = s;
}

std::string Employe::getNom()
{
    return nom;
}
std::string Employe::getPrenom()
{
    return prenom;
}
void Employe::setNom(std::string n)
{
    if (!(n.size() > 9))
        nom = n;
    else
        throw std::exception("Size of string superior to 9");
}
void Employe::setPrenom(std::string p)
{
        if (!(p.size() > 9))
        prenom = p;
    else
        throw std::exception("Size of string superior to 9");
}
void Employe::Afficher_infos()
{
    std::cout << "----   " << nom << ' ' << prenom << " ----\nSalaire: "<< salaire << "\n------------------------\n" << std::endl;
}