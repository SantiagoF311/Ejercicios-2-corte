#include <iostream>

using namespace std;

int main()
{
    double nota, promedio, suma = 0;
    int estrato;

    cout << "Ingrese sus 5 notas \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "ingrese la nota \n";
        cin >> nota;
        suma += nota;
    }

    promedio = suma / 5;

    cout << "Ingrese su estrato socioeconomico \n";
    cin >> estrato;

    cout << "\n Estrato: " << estrato
         << "\n Promedio:" << promedio;

    if (estrato < 3 && promedio >= 4.2)
    {
        cout << "\n Felicitaciones, usted ha sido seleccionado como uno de los beneficiaros de la beca";
    } else {
        cout << "\n Lamentamos decirle que usted no ha sido seleccionado para ser beneficiaro de la beca";
    }
}