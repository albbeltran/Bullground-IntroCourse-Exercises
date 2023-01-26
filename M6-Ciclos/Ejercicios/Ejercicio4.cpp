/* Escribir un programa que muestre el eco de todo lo que el usuario introduzca, hasta que el 
usuario escriba "salir" terminara. */

#include<iostream>
#include<string>

using namespace std;

int main() {
	string palabra;
		
	do {
		cout<<"Palabra: "; cin>>palabra;
		
		if(palabra != "salir") {
			cout<<palabra<<endl;
			cout<<"\n";
		}
		
	} while(palabra != "salir");
	
	return 0;
}
