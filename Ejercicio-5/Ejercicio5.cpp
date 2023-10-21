#include <iostream>

using namespace std;

int main()
{
    int matriz[1][5];
    int suma = 0;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Ingrese 5 enteros para la matriz ";
            cin >> matriz[i][j];
            suma += matriz[i][j];
        }
    }
    if (suma % 2 != 1)
    {
        cout << "La suma de los elementos es par: " << suma;
    }
    else
    {
        cout << "La suma de los elementos es impar: " << suma;
    }
}