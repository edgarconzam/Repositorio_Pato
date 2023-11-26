#include <iostream>

using namespace std;

int main() {
    int altura;

    // Solicitar al usuario la altura del rombo
    cout << "Ingrese la altura del rombo: ";
    cin >> altura;

    // Asegurarse de que la altura sea un número impar
    if (altura % 2 == 0) {
        cout << "La altura debe ser un número impar." << endl;
        return 1;
    }

    // Imprimir la parte superior del rombo
    for (int i = 0; i < altura / 2 + 1; i++) {
        for (int j = 0; j < altura / 2 - i; j++)
            cout << " ";

        for (int k = 0; k < 2 * i + 1; k++)
            cout << "*";

        cout << endl;
    }

    // Imprimir la parte inferior del rombo
    for (int i = altura / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < altura / 2 - i; j++)
            cout << " ";

        for (int k = 0; k < 2 * i + 1; k++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
