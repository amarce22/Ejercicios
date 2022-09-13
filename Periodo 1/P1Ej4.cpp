#include <iostream>
using namespace std;

int main(){
	double calificacion;
	cout << "Ingrese la calificaccion: ";
	cin >> calificacion;
	
	if( calificacion >=90 ) // 90 o mas recibe una "A"
	cout << "A";
	if( calificacion >=80 ) // 80 a 89 mas recibe una "B"
	cout << "B";
	if( calificacion >=70 ) // 70 a 79 mas recibe una "C"
	cout << "C";
	if( calificacion >=60 ) // 60 a 69 mas recibe una "D"
	cout << "D";
	else// menos de 60 recibe "F"
	cout << "F";
}
