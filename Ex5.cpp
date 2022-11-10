#include <iostream>
#include <vector>
using namespace std;

float moyenne(vector<float> &a)
{
    float somme{0};
    for ( size_t i = 0; i < a.size(); i++)
        somme += a.at(i);
    
    return somme / a.size();

    
}

int main()
{
    vector<float> Notes;
    int temp;
    for (int i = 0; i < 6; i++)
    {
        cin >> temp; 
        Notes.push_back(temp);
    }

    cout << moyenne(Notes);

    return 0;
}