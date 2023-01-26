/* Escribir un programa que almacene la cadena de caracteres clave en una variable, 
pregunte al usuario por la clave hasta que introduzca la clave correcta. */

#include<iostream>

using namespace std;

int main() {
	string clave, validacion;
	// La variable flag servira para saber cuando terminar el ciclo 
	bool flag = true;
	
	cout<<"Ingresa la clave: "; cin>>clave;
	
	system("CLS");
	cout<<"\n";
	
	// El ciclo do while es la mejor alternativa en este tipo de problemas
	do {
		cout<<"Clave: "; cin>>validacion;
		
		if(clave != validacion) {
			flag = true;
			cout<<"Las claves no coinciden. Intente de nuevo.\n"<<endl;	
					
		} else {
			flag = false;
			system("CLS");
			cout<<"\n\tINGRESO EXITOSO!!"<<endl;
		}	

	// La utilidad de la bandera o flag es esta, poder detener el ciclo cuando cambie su estado true o false
	// Dicho estado cambiara de acuerdo a si se cumple o no el condicional
	} while(flag == true);
	
	return 0;
}
