/* Escribir un programa que pregunte el nombre del usuario en la consola y despues de que 
el usuario lo introduzca muestre por pantalla la cadena Hola <nombre>!, donde <nombre> es 
el nombre que el usuario haya introducido.
Recuerda utilizar el tipo de dato adecuado para almacenar el nombre.*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	string nombre;
	
	// Se utiliza cout para imprimir texto en pantalla
	// Se utiliza cin para recibir datos del usuario y almacenarlos en una variable
	cout<<"Ingresa tu nombre: "; cin>>nombre;
	
	// Se construye la horacion "Hola + nombre!" imprimiendo la variable nombre en medio de los textos
	// "Hola " y "!".
	// Esto es conocido como concatenacion.
	cout<<"Hola "<<nombre<<"!"<<endl;
	
	return 0;
}
