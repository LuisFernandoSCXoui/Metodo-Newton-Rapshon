#ifndef NEWRAP_H
#define NEWRAP_H
#include <iostream>
#include <math.h>

using namespace std;
class NewRap
{
    public:
        void IngresaDatos();
        void RealizaMetodo();
        float ObtenRaiz();
        float ValuarFuncion(float);
        float ValuarFuncionPrima(float);

    private:
        float x0,f,fprim,x1,tol,dif;
};
#endif
