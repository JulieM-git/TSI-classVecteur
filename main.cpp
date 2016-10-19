#include <iostream>
#include <string>
#include "vector.h"

using namespace std;

int main()
{
    int taille; int indice; float valeur; std::string reponse; int suppi;

    cout << "Bienvenue dans la manipulation de vecteurs" << endl;

    cout << "Entez la taille du vecteur de votre choix" << endl;
    cin >> taille;
    vector vecteur(taille);
    vector vecteur2(taille+1);

    for(int i=0; i < taille; i++)
    {
        cout << "Entrez la valeur de l'indice "<< i << " : ";
        cin >> valeur;
        vecteur.change(i, valeur);
    };

    cout << "Souhaitez-vous changer une valeur ? [o/n] ";
    cin >> reponse;
    if(reponse == "o")
    {
        cout << "Entrez l'indice : ";
        cin >> indice;
        while(indice >= taille)
        {
            cout << "Trop grand" << endl;
            cin >> indice;
        }
        cout << "La valeur de l'indice " << indice << " du vecteur est " << vecteur.access(indice) << endl;

        cout << "Entrez la valeur : ";
        cin >> valeur;
        vecteur.change(indice, valeur);
        //cout << vecteur.get() << endl;
        cout << "La valeur de l'indice " << indice << " du vecteur est devenu " << vecteur.access(indice) << endl;
    };

    cout << vecteur.somme(vecteur2) << endl;

    cout << "Indice de suppression ";
    cin >> suppi;
    cout << vecteur.supp(suppi) << endl;

    for(int i=0; i<vecteur.sizer; i++)
    {
        cout << vecteur.access(i) << " ";
    }

    return 0;
}
