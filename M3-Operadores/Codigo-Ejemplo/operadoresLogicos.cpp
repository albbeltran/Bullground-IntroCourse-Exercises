// Operadores Logicos

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    
    // OPERADOR AND &&
  
    // false && false = false
    cout << ((a == 0) && (a > b)) << endl;
    // false && true = false
    cout << ((a == 0) && (a < b)) << endl;
    // true && false = false
    cout << ((a == 5) && (a > b)) << endl;
    // true && true = true
    cout << ((a == 5) && (a < b)) << endl;


    
    // OPERADOR OR ||
    
    // false && false = false
    cout << ((a == 0) || (a > b)) << endl;
    // false && true = true
    cout << ((a == 0) || (a < b)) << endl;
    // true && false = true
    cout << ((a == 5) || (a > b)) << endl;
    // true && true = true
    cout << ((a == 5) || (a < b)) << endl;
    
    
    
	// OPERADOR NOT !
    
    // !false = true
    cout << !(a == 0) << endl;
    // !true = false
    cout << !(a == 5) << endl;


    return 0;
}

