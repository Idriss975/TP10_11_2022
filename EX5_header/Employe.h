#pragma once
#include <vector>
#include <string>
class Employe
{
    std::string nom;
    std::string prenom;
    float salaire;
public:
    inline static std::vector<Employe> ListeEmps;
    Employe(std::string n, std::string p, float s);
    std::string getNom();
    std::string getPrenom();
    void setNom(std::string n);
    void setPrenom(std::string p);
    void Afficher_infos();
};
