#include <iostream>
using namespace std;

int main()
{
    int vector[] = {4, 1, 2, 3, 7, 5, 8, 10, 9, 6};
    int i, j, aux, suma = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }

    for (i = 9; i >= 0; i--)
    {
        cout << vector[i] << "\n";
        suma += vector[i];
    }
    cout << "La suma de los elementos es: " << suma;
}