#include "vector.h"

vector::vector(int taille)
{
    //ctor
    this->sizer = taille;
    this->vecteur = new float[taille];
}

vector::~vector()
{
    //dtor
}

int vector::getSize()
{
    return this->sizer;
}

float vector::access(int indice)
{
    return this->vecteur[indice];
}

float * vector::get()
{
    return this->vecteur;
}

void vector::change(int indice, float newValeur)
{
    if(indice < this->sizer)
    {
        this->vecteur[indice] = newValeur;
    }
}

float * vector::somme(vector vecteur2)
{
    if(this->sizer == vecteur2.sizer)
    {
    for (int i = 0; i < this->sizer; i++)
        {
            float valeur = this->access(i) + vecteur2.access(i);
            this->change(i,valeur);
        }
    }
    return this->vecteur;
}

float * vector::supp(int indice)
{
    if(indice < this->sizer)
    {
        for(int i=indice; i<this->sizer; i++)
        {
            this->change(i,this->access(i+1));
        }
        this->sizer = sizer - 1;
        return this->vecteur;
    }
}

bool vector::estEgal(vector vecteur2)
{
    bool E = 1;
    if(this->sizer == vecteur2.sizer){
        for (int i = 0; i < this->sizer; i++){
            if (this->access(i) != vecteur2.access(i)){
                E = 0;
            }
        }
    }else{
        E = 0;
    }
    return E;
}

float vector::sommeElem()
{
    float sum = 0;
    for (int i = 0; i < this->sizer; i++)
    {
            sum += this->access(i);
    }
    return sum;
}
