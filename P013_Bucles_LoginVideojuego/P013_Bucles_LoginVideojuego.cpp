// P013_Bucles_LoginVideojuego.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Contantino
//El login en un videojuego se repite si el usuario no ingresó los datos correctos.
//Si ingreso los datos correctos volver a pedir los datos.

#include <iostream>


int main()
{
	std::string usuario;
	std::string password;
	bool repetir = true;

	
	
		std::cout << "Bienvenido al Valo\n";
		std::cout << "Ingresa tus datos\n";

		do
		{
			std::cout << "User: \n";
			std::cin >> usuario;
			std::cout << "Password: \n";
			std::cin >> password;

			if (usuario == "Pato")
			{
				if (password == "edgar123")
				{
					
				}
				else
				{
					while (usuario != "Pato" || password != "elpepexd");
				}
			}
			else
			{
				while (usuario != "Pato" || password != "elpepexd");
			}
		}
	
}

