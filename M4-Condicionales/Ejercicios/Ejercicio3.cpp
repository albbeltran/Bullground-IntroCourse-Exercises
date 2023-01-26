/* Escribir un programa que almacene la cadena de caracteres clave en una variable, pregunte 
al usuario por la clave e imprima por pantalla si la clave introducida por el usuario coincide 
con la guardada en la variable sin tener en cuenta mayusculas y minusculas. */

#include<iostream>
#include<string>

using namespace std;

int main() {
	string clave, validacion;
	
	cout<<"Ingresa la clave: "; cin>>clave;
	
	// Limpiar la pantalla en la consola
	system("CLS");
	
	cout<<"Clave: "; cin>>validacion;
	
	// Salto de linea
	cout<<"\n";
	
	if(clave != validacion) {
		cout<<"Las claves no coinciden."<<endl;
	} else {
		cout<<"Ingreso exitoso"<<endl;
	}
	
	return 0;
}
