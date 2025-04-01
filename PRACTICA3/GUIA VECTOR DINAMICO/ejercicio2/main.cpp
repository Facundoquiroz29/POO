//Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
//por parámetro en la primera posición.

#include <iostream>
using namespace std;

int* addprincipio(int* vector, int &cant, int datonuevo)
{
    int* aux = new int[cant+1];
    aux[0] = datonuevo; // solo guarda el dato nuevo en la primera pos
    for(int i=0; i<cant+1; i++)
    {
        aux[i+1] = vector[i];
        //i = 0, 1, 2
    }
    delete [] vector;
    cant++;
    return aux;
}

int main()
{
    int cant = 4;
    int* vector = new int[cant];
    for(int i =0; i<cant; i++)
    {
        vector[i] = i;
    }
    cout << "Agregue nuevo dato: ";
    int n; cin >> n;

    int* vector_nuevo = addprincipio(vector, cant, n);


    for(int i =0; i<cant; i++)
    {
        cout << vector_nuevo[i] << "  ";
    }
    cout << endl;
    return 0;
}
