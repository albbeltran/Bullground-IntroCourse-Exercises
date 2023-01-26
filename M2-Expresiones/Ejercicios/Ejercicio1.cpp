/* Escribir un programa que almacene el texto Hola Mundo! en una variable y luego muestre
por pantalla el contenido de la variable.
Recuerda utilizar el tipo de dato adecuado para almacenar el texto. */

#include<iostream>
// Importamos la libreria string para poder guardar cadenas de caracteres / texto
#include<string>

using namespace std;

int main() {
	// Declaracion de la variable de tipo string seguida de su nombre
	string texto;
	
	// Asignacion del texto a la variable
	texto = "Hola mundo!";
	
	// Impresion de la variable en pantalla
	cout<<texto<<endl;
	
	// Un error muy comun al imprimir una variable, es imprimirla entre comillas: 
	cout<<"texto"<<endl;
	// Esto va a imprimir la palabra "texto" en pantalla, en lugar del contenido de la variable

	return 0;
}
