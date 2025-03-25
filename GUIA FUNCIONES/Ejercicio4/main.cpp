#include <iostream>
using namespace std;

void intercambio(char &dato1, char &dato2);
void intercambio(int &dato1, int &dato2);
void intercambio(float arreglo[], float arreglo2[], int cantidad=3);

int main()
{
    char letra1='c';
    char letra2='z';
    cout<<"Antes---Letra 1: "<<letra1<<" Letra 2: "<<letra2<<endl;
    intercambio(letra1, letra2);
    cout<<"Despues---Letra 1: "<<letra1<<" Letra 2: "<<letra2<<endl;

    float arregloUno[3]={1.5, 3.3, 4.5};
    float arregloDos[3]={6.7, 7.4, 20.5};

    cout<<"Antes Arreglos: "<<endl;
    for(int i=0; i<3; i++){
        cout<<arregloUno[i]<<" "<<arregloDos[i]<<endl;
    }

    intercambio(arregloUno, arregloDos);
    cout<<"Despues Arreglos: "<<endl;
    for(int i=0; i<3; i++){
        cout<<arregloUno[i]<<" "<<arregloDos[i]<<endl;
    }
    return 0;
}

void intercambio(char &dato1, char &dato2){
    char aux;
    aux=dato1;
    dato1=dato2;
    dato2=aux;
}

void intercambio(int &dato1, int &dato2){
    int aux;
    aux=dato1;
    dato1=dato2;
    dato2=aux;
}

void intercambio(float arreglo[], float arreglo2[], int cantidad){
    float aux;
    for(int i=0; i<cantidad; i++){
        aux=arreglo[i];
        arreglo[i]=arreglo2[i];
        arreglo2[i]=aux;
    }
}
