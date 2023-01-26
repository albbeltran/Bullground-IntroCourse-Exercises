/* Escribir un programa que pregunte al usuario una cantidad a invertir, el interes anual
y el numero de anios, y muestre por pantalla el capital obtenido en la inversion, utiliza
la formula del interes compuesto. */

#include<iostream>
// utilizamos la libreria Math que nos ayudara a potenciar un numero
#include<Math.h>

using namespace std;

int main() {
	int tiempo;
	float capital_inicial, interes;
	double monto;
	
	cout<<"Ingrese la cantidad deseada a invertir: "; cin>>capital_inicial;
	cout<<"Ingrese el interes anual: "; cin>>interes;
	cout<<"Ingrese el plazo de inversion: "; cin>>tiempo;
	
	// Forumla del interes compuesto
	// Se utiliza el metodo pow, importado por la libreria Math
	// Es util para elevar un numero a una potencia 
	// Ejemplo del cuadrado de un numero con pow: pow(numero, 2) y cubo pow(numero, 3)
	monto = pow(1.0+  interes/100, tiempo) * capital_inicial;
	
	cout<<"\nEl monto obtenido despues de la inversion es de: "<<monto<<endl;
	
	return 0;
}
