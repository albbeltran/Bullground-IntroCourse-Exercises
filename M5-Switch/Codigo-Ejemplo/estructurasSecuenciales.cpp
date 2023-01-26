/* Estructuras Secuenciales

	switch (expresion logica) {
		case comparador1:
			accion;
			break;
		case comparador2:
			accion;
			break;
		case comparador3:
			accion;
			break;
		default:
			accion final;
			break;
		}

*/

#include<iostream>

using namespace std;

int main() {
	char letra = 'a';
	
	switch (letra) {
		case 'a':
			cout<<"La letra es b"<<endl;
		case 'c':
			cout<<"La letra es c"<<endl;
		case 'd':
			cout<<"La letra es d"<<endl;
		case 'e':
			cout<<"La letra es e"<<endl;
		default:
			cout<<"La letra es a"<<endl;
			break;
	}		
	
	return 0;
}
