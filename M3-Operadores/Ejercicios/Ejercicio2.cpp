/* Escribir un programa que pregunte al usuario por el número de horas trabajadas y el 
coste por hora. Despues debe mostrar por pantalla la paga que le corresponde. */

#include<iostream>

using namespace std;

int main() {
	// Declaramos las horas como tipo de dato Entero, ya que no pueden ser decimales
	int horas_trabajadas;
	float costo_por_hora, pago;
	
	cout<<"Ingresa el numero de horas trabajadas: "; cin>>horas_trabajadas;
	
	cout<<"Ingresa el costo por hora: "; cin>>costo_por_hora;
	
	pago = horas_trabajadas * costo_por_hora;
	
	cout<<"\nTu pago es de: "<<pago<<endl;
	
	return 0;
}
