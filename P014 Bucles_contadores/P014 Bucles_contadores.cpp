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
	int contador1 = 0.1;
	int contador2 = 0.1;
	int contador3 = 0.1;
	bool repetir = true;
	bool continuar;
	

	while (repetir)
	{
		std::cout << "En este programa haremos diferentes tipos de contadores y con diferentes velocidades\n";
		std::cout << "Vamos a empezar con un contador que funciona con while,do, for\n";

		while (i <= 100)
		{
			std::cout << "El contador while va en: " << i << " " << std::endl;
			i++;
			Sleep(contador1);
		}
		system("PAUSE()");

		i = 0;
		do
		{
			std::cout << "El contador do while va en: " << i << std::endl; i++;
			Sleep(contador2);
		} while(i<=100);

	
		system("PAUSE()");

		for (i = 0; i <= 100; i++)
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

		for (i = 0; i <= 100; i = i++)
		{
			std::cout << i;
			Sleep(contador3);
			if (i % 10 == 9)
			{
				printf("\n\n");
			}
		}

		std::cout << "Esto ha sido todo, quieres repetir el programa?\n";
		std::cout << "1.-si 0.no\n";
		std::cin >> repetir;

	}
}