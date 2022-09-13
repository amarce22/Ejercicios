#include <iostream>
using namespace std;

int main(){
	int numero, mayor=0, menor=999;
	for(int i=0; i<5; i++){
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
		if (numero>mayor) {
			mayor=numero;
		}
		if (numero<menor){
			menor=numero;
		}
	}
	cout << "El numero mayor es: " << mayor << endl;
}
