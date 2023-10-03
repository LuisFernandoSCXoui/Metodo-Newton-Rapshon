#include "NewRap.h"

void NewRap::IngresaDatos(){
cout<<"Ingrese el valor de [x0]"<<endl;
cin>>x0;
cout<<"Ingrese la tolerancia"<<endl;
cin>>tol;
}// Fin de ingresar Datos

float NewRap::ValuarFuncion(float x0){
f=(pow (x0,3)+pow (x0,2)-(3*x0)-3);
return f;
} //Fin valuar en la funcion

float NewRap::ValuarFuncionPrima(float x0){
fprim= ((3*(pow (x0,2))) + (2*(x0)) - 3);
return fprim;
}//Fin Valuar Funcion Priuma

void NewRap::RealizaMetodo(){
	cout<<"X0\tF(X)\tF'(X)\tX1\tDIFERENCIA"<<endl;
do{
    x1= (x0-(ValuarFuncion(x0)/ValuarFuncionPrima(x0)));
    dif= fabs(fabs(x0)-fabs(x1));
    cout<<x0<<"\t"<<ValuarFuncion(x0)<<"\t"<<ValuarFuncionPrima(x0)<<"\t"<<dif<<"\t"<<endl;
	x0=x1;
}while(dif>tol);// Fin Do-While
}//Fin de Realizar Metodo

float NewRap::ObtenRaiz(){
return x1;
}//Fin de Obtener Raiz

