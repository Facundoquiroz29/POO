//Realice una función que dado un vector dinámico de enteros, remueva la primera
//coincidencia de un elemento pasado por parámetro.
#include <iostream>
using namespace std;

bool existe_dato(int* vector, int cantidad, int dato)
{
    for(int i=0; i<cantidad; i++)
    {
        if (vector[i] == dato)
        {
            return true;
        }
    }
    return false;
}
int* removerelemento(int* vector, int &cant, int elemento)
{
    if(!existe_dato(vector, cant, elemento))
    {
        return vector;
    }

    int* vector_nuevo = new int[cant-1];
    int j = 0;
    for (int i=0; i<cant; i++)
    {
        if(elemento != vector[i])
        {
            vector_nuevo[j] = vector[i];
            j++;
        }
    }
    cant--;

    delete [] vector;
    return vector_nuevo;
}

int main()
{
    int cantidad = 10;
    int* vector0 = new int[cantidad];
    for(int i=0; i<cantidad; i++)
    {
        vector0[i] = rand() % 100;
        cout << vector0[i] << " - ";
    }

    cout << endl;
    cout << "Ingrese dato a eliminar: ";
    int date; cin >> date;
    cout << endl;

    int* vector1 = removerelemento(vector0, cantidad, date);

    for(int i=0; i<cantidad; i++)
    {
        cout << vector1[i] << " - ";
    }

    delete [] vector1;
    cout << endl;
    return 0;
}
