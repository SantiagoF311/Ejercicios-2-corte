#include <iostream>

using namespace std;

int main()
{
    int nNotas;
    double nota, suma = 0;

    cout << "Ingrese el numero de notas que desea introducir \n";
    cin >> nNotas;

    for (int i = 0; i < nNotas; i++)
    {
        cout << "ingrese una nota \n";
        cin >> nota;
        suma += nota;
    }

    cout << "Su promedio es de: " << suma / nNotas;
}