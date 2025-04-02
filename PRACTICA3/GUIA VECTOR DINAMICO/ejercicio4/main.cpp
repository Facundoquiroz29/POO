//Realice una función que dado un vector dinámico de enteros,remueva el elemento que se
//encuentra en una posición pasada por parámetro. Si la posición es mayor a la cantidad de
//elementos, la función no debe remover ningún elemento.
#include <iostream>
using namespace std;
int* removerdato(int* vector, int &cant, int pos) // version mia funcional
{
    if(pos < 1 || pos > cant)
    {
        return vector;
    }
    int* aux = new int[cant-1];
    int j = 0;

    //opcion1
    /*for (int i = 0; i < cant-1; ++i)
    {
        if(pos-1 == i)
        {
            aux[i] = vector[j+1];
            j++;
        } else {
            aux[i] = vector[j];
        }
        j++;
    }*/

    //opcion2
    for(int i=0; i<cant; i++)
    {
        if(pos-1 != i)
        {
            aux[j] = vector[i];
            j++;
        }
    }

    delete [] vector;
    cant--;
    return aux;
}


int main()
{
    int cant = 5;
    int* nnn = new int[cant];
    for (int i = 0; i < cant; ++i)
    {
        nnn[i] = rand() % 101;
        cout << nnn[i] << " ";
    }
    cout << endl;
    cout << "Ingrese la posicion del dato a borrar: ";
    int n; cin >> n;

    int* nn = removerdato(nnn,cant, n);

    for (int i = 0; i < cant; ++i)
    {
        cout << nn[i] << " ";
    }
    delete [] nn;
    return 0;
}
