#include <iostream>
using namespace std;

int potencia(int n, int p);
int main()
{
    int n, p, rpta;
    cout << "Ingrese numero: ";
    cin >> n;
    //Corregir para cuando un numero p es negativo
    cout << "Ingrese potencia(puede ser negativo): ";
    cin >> p;
    rpta = potencia(n,p);
    cout << "Respuesta: " << rpta << endl;
    return 0;
}
int potencia(int n, int p)
{
    if(p == 0)
    {
        return 1;
    }
    return n * potencia(n, p-1);
}
