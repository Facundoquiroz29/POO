#include <iostream>
using namespace std;
void formalinea(int cantidad, char caracter = '#')
{
    for(int i = 0; i < cantidad; i++)
    {
        cout << caracter;
    }

}

int main()
{
    char cart;
    int cant;
    cout << "ingrese caracter: ";
    cin >> cart;
    cout << "Ingrese cantidad: ";
    cin >> cant;
    formalinea(cant, cart);
    cout << endl;
    formalinea(cant);
    return 0;
}
