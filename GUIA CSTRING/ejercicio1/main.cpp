#include <iostream>
using namespace std;
int tamanio(char* cadena)
{
    int cont = 0;
    while(cadena[cont] != '\0')
    {
        cont++;
    }
    return cont;
}

char* mayuscula(char* cadena)
{
    int tam = tamanio(cadena); // calculamos el tamaño
    char* aux = new char[tam];
    for(int i=0; i<tam; i++)
    {
        if(cadena[i]>= 'a' && cadena[i] <= 'z') // vereficamos las minusculas para convertir a mayusculas
        {
            aux[i]= cadena[i]-32; // convertimos
        } else { //si no esta en el rango de las mayusculas no pasa nada
            aux[i] = cadena[i]; // solamente pasamos
        }
    }
    return aux; // retornamos nueva cadena
}
int main()
{
    char* cadena = mayuscula("Hola mundo!!!");
    cout << cadena << endl;
    return 0;
}
