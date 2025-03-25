#include <iostream>
using namespace std;

bool validar_edad(int edad)
{
    if((edad > 12) && (edad < 90))
    {
        return true;
    }
    return false;
}

int main()
{
    int cant = 3;
    int aux;
    int edad[cant];
    string name[cant];
    for(int i=0; i<cant; i++)
    {
        cout << "Ingrese nombre: ";
        getline(cin, name[i]);
        cout << "Ingrese edad: ";
        cin >> aux;
        edad[i] = aux;
        if(!validar_edad(aux))
        {
            cout << endl;
            cout << "Edad no valida. " << endl;
            cout << endl;
            i--;
        }
        cin.ignore();
    }

    for(int i=0; i<cant; i++)
    {
        cout << "Nombre: " << name[i] << "   Edad: " << edad[i] << "  Pos:" << i << endl;
    }
    return 0;
}
