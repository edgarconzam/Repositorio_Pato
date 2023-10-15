// P014 Bucles_contadores.cpp 
// Edgar Constantino
// Contar de 1000 a 0 con while, do while y for
// contar a 100 lento
// contar hasta 10x10 

#include <iostream>
#include <windows.h>

int main()
{
	int i = 0;
	int contador1 = 1000;
	int contador2 = 500;
	int contador3 = 0.1;
	bool repetir = true;
	bool continuar;
	

	while (repetir)
	{
		std::cout << "En este programa haremos diferentes tipos de contadores y con diferentes velocidades\n";
		std::cout << "Vamos a empezar con un contador que funciona con while,do, for\n";
		
		do
		{
			for (i = 1000; i >= 0; i--)
			{
				std::cout << i << std::endl;
				Sleep(contador3);
			}
			std::cout << "Quieres repetir el contador?\n";
			std::cout << "1.-Si  0.-No\n";
			std::cin >> continuar;
		} while(continuar);

		std::cout << "Ahora vamos a contar de 0 a 100 lento\n";

		for (i = 0; i <= 100; i++)
		{
			std::cout << i << std::endl;
			Sleep(contador1);
		}

		std::cout << "Ahora vamos a contar de 10 en 10 hasta llegar a 100\n";

		for (i = 0; i <= 100; i = i + 10)
		{
			std::cout << i << std::endl;
			Sleep(contador2);
		}

		std::cout << "Esto ha sido todo, quieres repetir el programa?\n";
		std::cout << "1.-si 0.no\n";
		std::cin >> repetir;

	}
}