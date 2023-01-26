/* Escribir un programa que pregunte al usuario si los pasajeros de un camion son masculinos o femeninos, 
y su edad, si es femenino y son menores de 21 anios deberan pagar $7, si es mayor de 21 anios debera pagar $9. 
Si el pasajero es masculino y menor de 25 anios debera pagar $9 y si es mayor de 25 anos debera pagar $11. 
Imprimir el pago correspondiente. */

#include<iostream>

using namespace std;

int main() {
	char genero;
	int edad, costo;
	
	cout<<"Ingresa el genero (F/M): "; cin>>genero;
	cout<<"Ingresa la edad: "; cin>>edad;
	
	if(genero == 'F') {
		
		if(edad < 21) {
			costo = 7;
		} else {
			costo = 9;
		}

	} else if(genero == 'M') {
		
		if(edad < 25) {
			costo = 9;
		} else {
			costo = 11;
		}
	
	} else {
		system("CLS");
		cout<<"\n\tERROR! Ingresa un genero F/M.";
	}

	system("CLS");
	
	cout<<"\n\tEl costo es: "<<costo<<endl;
	
	return 0;
}
