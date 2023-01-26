/* Escribir un programa que pregunte al usuario el precio de un producto y muestre 
en la salida el precio del producto mas el IVA. */

#include<iostream>

using namespace std;

int main() {
	// Declaramos variables de tipo float dado que el precio podria contener decimales.
	float precio, iva, precio_total;
	
	cout<<"Ingresa el precio del producto: "; cin>>precio;
	
	// IVA en Mexico es del 16%, puede variar segun el pais
	iva = 0.16;
	
	precio_total = precio * iva + precio;
	
	cout<<"El precio mas IVA es: "<<precio_total<<endl;
	
	return 0;
}
