#include <iostream>
#include "NewRap.h"

int main(){
	NewRap objeto;
	objeto.IngresaDatos();
	objeto.RealizaMetodo();
	cout<<"La raiz es: "<<objeto.ObtenRaiz();
	return 0;
}//Fin del main
