// P005_Aritmeticos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constantino
//

#include <iostream>
using namespace std;
int main()

{
	float a = 0;
	float b = 0;
	float c = 0;


	//suma
	cout << "ingresa un numero para sumar\n";
	cin >> a;
	cout << "ingresa el otro numero para sumarlo\n";
	cin >> b;
	c = a + b;
	cout << "El resultado de la suma es: " << c << endl;

	//resta
	cout << "ingresa un numero para restar\n";
	cin >> a;
	cout << "ingresa otro numero\n";
	cin >> b;
	c = a - b;
	cout << "El resultado de la resta es: " << c << endl;

	//multiplicacion
	cout << "ingresa un numero para multiplicar\n";
	cin >> a;
	cout << "ingresa otro numero\n";
	cin >> b;
	c = a * b;
	cout << "El resultado de la multiplicacion es: " << c << endl;


	//division
	cout << "ingresa un numero para dividir\n";
	cin >> a;
	cout << "ingresa otro numero\n";
	cin >> b;
	c = a / b;
	cout << "el resultado de la division es: " << c << endl;

	//potencia
	cout << "dame un numero \n";
	cin >> a;
	cout << "dame un numero para elevevarlo a una potencia\n";
	cin >> b;
	c = pow(a, b);
	cout << "el resultado es: " << c << endl;

	//raiz cuadrada
	cout << "dame un numero para sacar su raiz cuadrada\n";
	cin >> a;
	c = sqrt(a);
	cout << " El resultado es: " << c << endl;


	
 
		









}
