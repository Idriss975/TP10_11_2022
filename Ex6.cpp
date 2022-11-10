#include <iostream>
using namespace std;

struct point
{
    float x;
    float y;
    static void Fillpoint(point &pn)
    {
        cout << "Remplir le point b.\ncoord x = ";
        cin >> pn.x;
        cout << "coord y = ";
        cin >> pn.y;
    }
};



int main()
{
    point a, b, c;

    a = {3.2, 6.4};
    point::Fillpoint(b);
    c = {(a.x + b.x)/2, (a.y + b.y)/2};

    cout << "Les coordinees du point C ("<<c.x<<','<<c.y<<')'<<endl;


    return 0;
}