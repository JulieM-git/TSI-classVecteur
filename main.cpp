#include <iostream>
#include <string>
#include "vector.h"

using namespace std;

int main()
{
    int taille; int indice; float valeur;  int suppi;
    std::string reponse1; std::string reponse2;

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
    cin >> reponse1;
    if(reponse1 == "o")
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

    cout << "Souhaitez-vous supprimer une valeur ? [o/n] ";
    cin >> reponse2;
    if(reponse2 == "o")
    {
        cout << "Indice de suppression : ";
        cin >> suppi;
        cout << vecteur.supp(suppi) << endl;

        for(int i=0; i<vecteur.sizer; i++)
        {
            cout << vecteur.access(i) << " ";
        }
        cout << " " << endl;
    }

    vector v1(6); vector v2(6);
    for (int i=0; i<6; i++){
        v1.change(i, i);
        v2.change(i, i+1);
    }
    cout << "Les deux vecteurs sont égaux ? " << v1.estEgal(v2) << endl;

    cout << "La somme des éléments du vecteur est : " << v1.sommeElem() << endl;


    return 0;
}
