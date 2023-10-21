#include <iostream>

using namespace std;

int main()
{
    int matriz[2][2] = {};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Ingrese el numero que desea poner en la posicion [" << i << "][" << j << "] de la matriz ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}