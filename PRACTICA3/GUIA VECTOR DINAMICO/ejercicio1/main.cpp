#include <iostream>
/* Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
 por parámetro en la ultima posición. */
using namespace std;

int *addFinal(int *vector, int dato, int &cantidad){
    int * aux = new int [cantidad+1];
    for(int i=0; i<cantidad; i++){
        aux[i]=vector[i];
    }
    aux[cantidad]=dato;
    cantidad++;
    return aux;
}

int main()
{
    int valorAgregar, cantidad=5;
    int * vectorMain = new int [cantidad];
    for(int i=0; i<cantidad; i++){
        vectorMain[i]=i;
    }
    for(int i=0; i<cantidad; i++){
        cout<<vectorMain[i]<<" ";
    }
    cout<<endl<<"Ingrese dato a agregar: "; cin>>valorAgregar;
    int * vectorNuevo = addFinal(vectorMain, valorAgregar, cantidad);
    for(int i=0; i<cantidad; i++){
        cout<<vectorNuevo[i]<<" ";
    }
    cout<<endl;
    return 0;
}
