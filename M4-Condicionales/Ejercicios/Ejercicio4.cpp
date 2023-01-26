/* Escribir un programa para una empresa que tiene salas de juegos para todas las edades y quiere 
calcular de forma automatica el precio que debe cobrar a sus clientes por entrar. 
El programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. 
Si el cliente es menor de 4 anios puede entrar gratis, si tiene entre 4 y 18 anios debe pagar $5
y si es mayor de 18 anios, $10. */

#include<iostream>

using namespace std;

int main() {
	int edad, costo;
	
	cout<<"Ingresa la edad: "; cin>>edad;
	
	if(edad < 4) {
		costo = 0;
	} else if(4 <= edad && edad < 18) {
		costo = 5;
	} else {
		costo = 10;
	}
	
	cout<<"\nEl costo es: "<<costo<<endl;
	
	return 0;
}
