#include <iostream>
#include <cmath>
using namespace std;

float pitagoras(float,float); // Prototipo de funcion

int main(){
	float cat1, cat2, hipo=0;
	cout <<"Ingrese el cateto 1: ";
	cin >> cat1;
	cout <<"Ingrese el cateto 2: ";
	cin >> cat2;
	hipo = pitagoras(cat1,cat2);
	cout << "La hipotenusa del triangulo es: ";
	cout << hipo;
	return 0;
}

float pitagoras(float x, float y){
	float result = 0;
	//qrt = raiz de un numero. pow =potencia de
	//un numero elvado a otro. Ambas funciones
	//se encuentran en la biblioteca de cmath.
	result = sqrt(pow(x,2)+pow(y,2));
	return result;
}
