#include <iostream>
#include <cmath>
#include <array>
using namespace std;

struct point
{
    float x;
    float y;
    void Saisir_coords(int &&X, int &&Y) // Self learning is fun (rvalues)
    {
        x = X;
        y = Y;
    }
    array<float,2> Afficher_coord()
    {
        return {x,y};
    }
    float Distance(point &ptn)
    {
        return sqrt(pow(ptn.x + x, 2)+ pow(ptn.y + y, 2));
    }

    array<float,2> Milieu(point &ptn)
    {
        return {(x + ptn.x)/2, (y + ptn.y)/2};
    }
};

int main()
{
    point a, b{1,0};
    a.Saisir_coords(0,0);
    cout << "Les coordonnées de a sont {" << a.Afficher_coord().at(0)<<','<< a.Afficher_coord().at(1) <<'}' << endl;
    cout << "La distance entre les 2 points est " << a.Distance(b) << endl;
    cout << "Le milieu entre les 2 points est {" << a.Milieu(b).at(0) << ',' << a.Milieu(b).at(1) <<'}'<< endl;
    return 0;
}