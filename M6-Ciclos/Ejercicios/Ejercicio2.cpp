/* Escribir un programa que pregunte al usuario su edad y muestre por pantalla todos los anios
que ha cumplido (desde 1 hasta su edad). */

#include<iostream>

using namespace std;

int main() {
	int edad, contador = 1;
	
	cout<<"Ingresa tu edad: "; cin>>edad;
	
	// Salto de linea
	cout<<"\n";
	
	// Al utilizar el ciclo while, utilizamos una variable de contador como apoyo
	// Esto seria equivalente a la variable "i" del ciclo For
	while(contador <= edad) {
		cout<<"Cumpliste "<<contador<<" anios"<<endl;
		contador++;
	}
	
	return 0;
}
