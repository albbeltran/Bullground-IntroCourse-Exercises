/* Escribir un programa que pregunta al usuario un número del 1 al 7 e indique el dia 
de la semana correspondiente. */

#include<iostream>
#include<string>

using namespace std;

int main() {
	int num;
	string dia;
	
	cout<<"Ingresa un numero: "; cin>>num;
	
	switch(num) {
		case 1:
			dia = "Lunes";
			break;
		case 2:
			dia = "Martes";
			break;
		case 3:
			dia = "Miercoles";
			break;		
		case 4:
			dia = "Jueves";
			break;
		case 5:
			dia = "Viernes";
			break;
		case 6:
			dia = "Sabado";
			break;
		case 7:
			dia = "Domingo";
			break;
	}
	
	cout<<"\nEl numero corresponde al dia: "<<dia<<endl;
	
	return 0;
}
