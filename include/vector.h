#ifndef VECTOR_H
#define VECTOR_H


class vector
{
    public:
        vector(int taille);
        virtual ~vector();
        int sizer;

        float * get();
        int getSize();
        float access(int indice);
        void change(int indice, float newValeur);
        float * somme(vector vecteur2);
        float * supp(int indice);

    protected:

    private:
        float *vecteur;

};

#endif // VECTOR_H
