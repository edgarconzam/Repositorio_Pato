// P009_calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constantino




#include <iostream>

#include <string>

int main()
{
    int opc;
    int n1, n2;
    float VA;
    
    std::cout << "Hola usuario dime que Operacion quieres hacer?\n";
    std::cout << "1.-suma 2.-resta 3.-multiplicacion 4.-division 5.-Valor absoluto 6.-Mayor y menor que\n";

    std::cin >> opc;

    switch (opc)
    {
    case 1:
        std::cout << "Dame un numero\n";
        std::cin >> n1;
        std::cout << "Dame otro numero para sumarlo\n";
        std::cin >> n2;
        std::cout << n1 + n2;
        break;
    case 2:
        std::cout << "Dame un numero\n";
        std::cin >> n1;
        std::cout << "Dame otro numero para restarlo\n";
        std::cin >> n2;
        std::cout << n1 - n2;
        break;
    case 3:
        std::cout << "Dame un numero\n";
        std::cin >> n1;
        std::cout << "Dame otro numero para multiplicarlo\n";
        std::cin >> n2;
        std::cout << n1 * n2;
        break;
    case 4:
        std::cout << "Dame un numero\n";
        std::cin >> n1;
        std::cout << "Dame otro numero para dividirlo\n";
        std::cin >> n2;
        std::cout << n1 / n2;
        break;
    case 5:
        std::cout<< "Dame un numero para darte su valor absoluto\n";
        std::cin >> VA;
        std::cout << "El valor absoluto de "; std::cout << VA;  std::cout << " es: ";
        



    }
      
}
    


 