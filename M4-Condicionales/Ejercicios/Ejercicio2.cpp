/* Escribir un programa que pregunte al usuario su edad y muestre por pantalla si es mayor de edad o no. */

#include<iostream>

using namespace std;

int main() {
	int edad;
	
	cout<<"Ingresa tu edad: "; cin>>edad;
	
	// Salto de linea
	cout<<"\n";
	
	if(edad > 18) {
		cout<<"Eres mayor de edad"<<endl;
	} else {
		cout<<"Eres menor de edad"<<endl;
	}
	
	return 0;
}
