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
	int contador1 = 500;
	int contador2 = 250;
	int contador3 = 100;
	bool repetir = true;
	bool continuar;


	while (repetir)
	{
		std::cout << "En este programa haremos diferentes tipos de contadores y con diferentes velocidades\n";

		//while
		while (i <= 1000)
		{
			std::cout << "El contador while va en: " << i << " " << std::endl;
			i++;
			Sleep(contador1);
		}
		system("PAUSE()");
		//do while
		i = 0;
		do
		{
			std::cout << "El contador 10x10 va en: " << i << std::endl; i++;
			Sleep(contador2);
		} while (i <= 1000);


		system("PAUSE()");
		//for
		for (i = 0; i <= 1000; i++)
		{
			std::cout << "El contador for va en: " << i << std::endl; i++;
			Sleep(contador3);
		}

		for (i = 0; i <= 100; i++)
		{
			std::cout << i << std::endl;
			Sleep(contador3);
		}
		system("PAUSE()");

		std::cout << "Ahora vamos a contar de 10 en 10 hasta llegar a 100\n";

		for (i = 0; i <= 100; i = ++i)
		{
			std::cout << i << " ";
			Sleep(contador3);
			if (i % 10 == 9)
			{
				printf("\n");
			}
		}

		std::cout << "Esto ha sido todo, quieres repetir el programa?\n";
		std::cout << "1.-si 0.no\n";
		std::cin >> repetir;

	}
}
