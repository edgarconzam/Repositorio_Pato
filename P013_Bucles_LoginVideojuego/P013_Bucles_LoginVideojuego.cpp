// P013_Bucles_LoginVideojuego.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Contantino
//El login en un videojuego se repite si el usuario no ingresó los datos correctos.
//Si ingreso los datos correctos volver a pedir los datos.

#include <iostream>
#include <string>


int main()
{
	std::string user1;
	std::string user2;
	std::string password1;
	std::string password2;
	bool reinicio = true;

	std::cout << "Bienvenido al valo\n";
	std::cout << "Registrate\n";
	std::cout << "Ingresa un nombre de usuario\n";
	getline(std::cin, user1);
	std::cout << "Ingresa tu password\n";
	getline(std::cin, password1);
	
	while (reinicio)
	{
		std::cout << "Tienes que iniciar sesion para jugar valo\n";
		std::cout << "Ingresa tu usuario\n";
		
		std::cin >> user2;
		
		if (user1 == user2)
		{
		
			std::cout << "Bien, Ingresa tu password\n";
			std::cin >> password2;
			
			if (password1 == password2)
			{
			std::cout << "BIENVENIDO AL VALO\n";
			}
			else
			{
				while (password1 != password2)
				{
					std::cout << "El password es incorrecto\n";
					std::cout << "Vuelve a intentarlo\n";
					std::cin >> password2;
					if (password1 == password2)
					{
						std::cout << "BIENVENIDO AL VALO, hora de rankear\n";
					}
				}
			}
		}
		else
		{ 
			while (user1 != user2)
			{
				std::cout << "El user es incorrecto\n";
				std::cout << "Intentalo de nuevo\n";
				std::cin >> user2;

				if (user1 == user2)
				{
					std::cout << "Bien, ahora ingresa el password\n";
					std::cin >> password2;
					if (password1 == password2)
					{
						std::cout << "BIENVENIDO AL VALO, Hora de rankear\n";
					}
					else
					{
						while (password1 != password2)
						{
							std::cout << "El password esta incorrecto\n";
							std::cout << "Intentalo de nuevo\n";
							std::cin >> password2;
							if (password1 == password2)
							{
								std::cout << "BIENVENIDO AL VALO, Hora de rankear\n";
							}
						}
					}
				}
			}
		}
	}
}

