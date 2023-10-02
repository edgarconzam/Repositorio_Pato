// P009_Condicionales_Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>

int main()
{
    int opc;
    int n1, n2;
    float numero;
   
    bool repetir = true;

    


    while (repetir)
    {
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
            std::cout <<"El resultado es: " << n1 + n2;
            break;
        case 2:
            std::cout << "Dame un numero\n";
            std::cin >> n1;
            std::cout << "Dame otro numero para restarlo\n";
            std::cin >> n2;
            std::cout << "El resultado es: " << n1 - n2;
            break;
        case 3:
            std::cout << "Dame un numero\n";
            std::cin >> n1;
            std::cout << "Dame otro numero para multiplicarlo\n";
            std::cin >> n2;
            std::cout << "El resultado es: " << n1 * n2;
            break;
        case 4:
            std::cout << "Dame un numero\n";
            std::cin >> n1;
            std::cout << "Dame otro numero para dividirlo\n";
            std::cin >> n2;
            std::cout << "El resultado es: " << n1 / n2;
            break;
        case 5:
            std::cout << "Dame un numero para darte su valor absoluto\n";
            std::cin >> numero;
            if (numero >= 0)
            {
                std::cout << "El valor absoluto es :" << numero;
            }

            else
            {
                std::cout << (numero = numero * -1);
            }
            
            break;
        case 6:
            std::cout << "Dame un numero: ";
            std::cin >> n1;
            std::cout << "\ndame otro y te dire ";
            std::cout << " cual es mayor y cual es menor: ";
            std::cin >> n2;
            if (n1 == n2)
            {
                std::cout << "\naaa mira son iguales!\n";
            }
            else
            {
                if (n1 < n2)
                {
                    std::cout << "El mayor es " << n2 << "\nY el menor es " << n1 << std::endl;
                }
                else
                {
                    std::cout << "El mayor es " << n1 << "\nY el menor es " << n2 << std::endl;
                }
            }
            std::cin.ignore();
        }
        std::cout << "\nQuieres hacer otra operacion?";
        std::cout << "\n1.-Si  0.-No\n";
        std::cin >> repetir;
        system("cls");

    }
}
            
        

