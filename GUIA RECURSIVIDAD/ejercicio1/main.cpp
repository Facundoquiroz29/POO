// Realice un método que retorne el acumulado de un vector de 10 enteros. Utilice recursividad.
#include <iostream>
using namespace std;

int acumulado(int vec[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    return vec[n-1] + acumulado(vec, n-1);
}


int main()
{
    int n = 5;
    int vec[n];
    cout << "Ingrese datos: "<< endl;
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int tot = acumulado(vec, n);
    cout << tot << endl;
    return 0;
}
