/* Escribir un programa que pregunte al usuario un numero y determine si es par o impar. */

#include<iostream>

using namespace std;

int main() {
	int numero;
	
	cout<<"Ingresa un numero: "; cin>>numero;
	
	// Salto de linea
	cout<<"\n";

	if(numero%2 == 0) {
		cout<<"El numero es par."<<endl;
	} else {
		cout<<"El numero es impar."<<endl;
	}
	
	return 0;
}
