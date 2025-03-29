#include <iostream>
using namespace std;

float potencia(float n, float p);
int main()
{
    float n, p;
    float rpta;
    cout << "Ingrese numero: ";
    cin >> n;
    //Corregir para cuando un numero p es negativo
    cout << "Ingrese potencia(puede ser negativo): ";
    cin >> p;
    rpta = potencia(n,p);
    cout << "Respuesta: " << rpta << endl;
    return 0;
}
float potencia(float n, float p)
{
    if(p == 0)
    {
        return 1;
    }
    if (p < 0) // calculamos la potencia si es negativa
    {
        return 1/n * potencia(n,p+1);
        /* ej=
            n= 2 y p= -3
            n = 1/2 = 0,5
            n se va a multiplicar a si mismo hasta que p == 0 y retorne 1.
            1/2 * 1/2 * 1/2 * 1 = 0,125
*/
    }
    return n * potencia(n, p-1);
    /* ej=
            n= 2 y p= 3
            n se va a multiplicar a si mismo hasta que p == 0 y retorne 1.
            2 * 2 * 2 * 1 = 8
*/
}
