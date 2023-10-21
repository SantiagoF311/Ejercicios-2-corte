#include <iostream>

using namespace std;

int main()
{
    int vector[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int promedio, suma = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vector[i] % 2 != 1)
        {
            suma += vector[i];
        }
    }

    promedio = suma / 10;
    cout << "La suma de los elementos del array es de: "<< suma << "\n";
    cout << "El promedio de los elementos del array es de: " << promedio << "\n";
}