// 3. Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
// por parámetro en una posición pasada por parámetros.

#include <iostream>
using namespace std;
int* adddato(int* vec, int &cant, int dato, int pos)
{
    if(pos < 1 || pos > cant+1) // si la pos es menor a 1 y mayor que el vec+1, se retorna el vector
    {
        return vec;
    }
    int* newvector = new int[cant+1]; // vector aux

    int j = 0; //indice j, para movernos en el vector original
    for(int i=0; i<cant+1; i++)
    {
        if(i == pos-1)
        {
            newvector[i] = dato; //se almacena el vector en la pos que se le asigno
        } else {
            newvector[i] = vec[j]; // se sigue pasando datos
            j++;
        }
    }

    cant++;
    delete[]vec; // eliminamos el vector original
    return newvector;
}

int main()
{
    int cant = 10;
    int newdate, pos;
    cout << "Ingrese nuevo dato: ";
    cin >> newdate;
    cout << "Posicion: ";
    cin >> pos;
    int* vec = new int[cant];
    for(int i=0; i<cant; i++)
    {
        vec[i] = rand() % 90;
        cout << vec[i] << " ";
    }
    cout << endl;
    int* nvector = adddato(vec, cant, newdate, pos);
    for(int i=0; i<cant; i++)
    {
        cout << nvector[i] << " ";
    }
    delete [] nvector; // eliminamos el vector nuevo
    return 0;
}
