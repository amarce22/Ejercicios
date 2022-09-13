#include <iostream>
using namespace std;

int main()
{
	cout << "Escribe una nota:: ";
	char nota;
	cin >> nota;
	
	switch(nota){
		case 'A': case 'a':
		cout << "Excelente, aprobado con honores";
		break;
		case 'B': case 'b':
		cout << "Aproado de forma sobresaliente";
		break;
		case 'C': case 'c':
		cout << "Aprobado con buen desempenio";
		break;
		case 'D': case 'd':
		cout << "Aprobado de manera regular";
		break;
		case 'E': case 'e':
		cout << "Aprobado, pero se sugiere mejorar";
		break;
		case 'F': case 'f':
		cout << "Reprobado, con rendimento pobre";
		break;
		default:
		cout << "ERROR, Nota ingresada es incorrecta";
	} 
}
