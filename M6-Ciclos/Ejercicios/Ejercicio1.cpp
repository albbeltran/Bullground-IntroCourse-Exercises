/* Escribir un programa que pregunta al usuario una palabra y la muestre por pantalla 10 veces. */

#include<iostream>
#include<string>

using namespace std;

int main() {
	string palabra;
	
	cout<<"Ingresa una palabra: "; cin>>palabra;
	
	// Salto de linea
	cout<<"\n";
	
	// Podemos utilizar cualquier estructura (for, while, do while)
	for(int i=0; i<10; i++) {
		cout<<i+1<<". "<<palabra<<endl;
	}
	
	return 0;
}
