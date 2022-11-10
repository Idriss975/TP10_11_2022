#pragma once
#include <string>
class Employe
{
public:
    std::string nom;
    std::string prenom;
    float salaire;
    
    Employe(std::string &&n, std::string &&p, float &&s);
};
