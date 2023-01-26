/* Escribir un programa que calcule el factorial de un numero ingresado por el usuario.

Por ejemplo: 

5! = 5x4x3x2x1 y el resultado es 120 */

#include<iostream>

using namespace std;

int main() {
	int numero, factorial;
		
	cout<<"Ingresa un numero: "; cin>>numero;
	
	// Asignamos el valor del numero a factorial dado que nos servira en el ciclo For
	factorial = numero;
	
	// Se utiliza un ciclo For decremental
	for(int i=numero-1; i>=1; i--) {
		
		factorial = factorial * i;
	
		/* Suponiendo que el numero es 5, cada iteracion se veria asi:
			1) i=4; 5 = 5 * 4
			2) i=3; 20 = 20 * 3
			3) i=2; 60 = 60 * 2
			4) i=1; 120 = 120 * 1
			
			Declaramos que el ciclo finalice cuando i>1, ya que si no:
			
			5) i=0; 120 = 120 * 0
			
			Resultando en 0 cualquier factorial
		*/
		
	}
	
	cout<<"\nEl factorial del "<<numero<<" es: "<<factorial<<endl;
	
	return 0;
}
