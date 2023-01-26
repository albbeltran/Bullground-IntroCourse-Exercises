/* Escribir una calculadora que pregunte al usuario dos numeros, y realice las siguientes 
operaciones con dichos numeros: sumar, restar, multiplicar y dividir. */

#include<iostream>

using namespace std;

int main() {
	int num1, num2, opc, resultado;
	
	cout<<"Ingresa el primer numero: "; cin>>num1;
	cout<<"Ingresa el segundo numero: "; cin>>num2;
	
	system("CLS");
	
	cout<<"\tCALCULADORA \n\n\nSelecciona una operacion: \n\n1. Suma \n\n2. Resta \n\n3. Multiplicacion \n\n4. Division";
	cout<<"\n\n\tOpcion: "; cin>>opc;
	
	switch(opc) {
		case 1:
			resultado = num1 + num2;
			break;
		case 2:
			resultado = num1 - num2;
			break;
		case 3:
			resultado = num1 * num2;
			break;
		case 4:
			resultado = num1 / num2;
			break;
	}
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
