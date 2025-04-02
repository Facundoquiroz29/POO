//Realice una función que dado un vector dinámico de enteros, remueva un elemento pasado
//por parámetro.
#include <iostream>
using namespace std;

bool dato_existe(int* vector, int cant, int dato,int &cant_o)
{
    for(int i=0; i<cant; i++)
    {
        if(vector[i]==dato)
        {
            cant_o++;
        }
    }
    if(cant_o > 0) return true;
    return false;
}

int* removerelementosiguales(int* vector, int &cant, int dato)
{
    int cant_o = 0; //cantidad de ocurrencias
    if(!dato_existe(vector, cant, dato, cant_o)) //Verficamos que haya elemento, los contamos con el cont_o
    {
        return vector; // si no hay elementos, retornamos el mismo vector
    }

    int* vector_nuevo = new int[cant-cant_o];
    int j = 0;

    for(int i=0; i<cant; i++)
    {
        if(vector[i] != dato)
        {
            vector_nuevo[j] = vector[i];
            j++;
        }
    }
    cant = cant - cant_o;
    delete [] vector;
    return vector_nuevo;
}


int main()
{
    int cant = 10;
    int* vector = new int[cant];
    //-------------------------------------------------
    // Cargo el vector y lo muestro para con que datos estamos trabajando
    vector[0] = 21;
    vector[1] = 21;
    vector[2] = 45;
    vector[3] = 21;
    vector[4] = 45;
    vector[5] = 21;
    vector[6] = 21;
    vector[7] = 49;
    vector[8] = 98;
    vector[9] = 24;
    for(int i=0; i<cant; i++)
    {
        cout << vector[i] <<" ";
    }
    //-------------------------------------------------

    cout << endl;
    cout << "Ingrese dato a eliminar: ";
    int n; cin >> n;
    int* vectorN = removerelementosiguales(vector, cant, n);

    for(int i=0; i<cant; i++)
    {
        cout << vectorN[i] <<" ";
    }

    delete [] vectorN;
    return 0;
}
